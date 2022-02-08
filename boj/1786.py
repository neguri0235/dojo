import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')
a = list(sys.stdin.readline().rstrip())
b = list(sys.stdin.readline().rstrip())


def preprocessing(p):
    n = len(p)
    pi = [0 for _ in range(n)]
    j = 0
    for i in range(1, n):
        while j > 0 and p[i] != p[j]:
            j = pi[j-1]
        
        if p[i] == p[j]:
            pi[i] = j+1
            j += 1
        else:
            pi[i] = 0
    return pi


def kmp(s, p):
    pi = preprocessing(p)
    if dbg: print(pi)
    n, m = len(s), len(p)
    ans = []
    j = 0
    for i in range(0, n):

        while j > 0 and s[i] != p[j]:
            j = pi[j-1]
        
        if s[i] == p[j]:
            if j == (m-1):
                ans.append(i-m +2)
                j = pi[j]
            else:
                j += 1

    return ans


r = kmp(a, b)
print(len(r))
for e in r:
    print(e, end = ' ')


