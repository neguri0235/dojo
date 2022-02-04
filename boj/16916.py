import sys
dbg = 0
if dbg: sys.stdin = open('in.txt', 'r')

a = list(sys.stdin.readline().rstrip())
b = list(sys.stdin.readline().rstrip())

def preprocessing(p):
    m = len(p)
    pi = [0 for i in range(m)]
    j = 0

    for i in range(1, m):
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
    ans = []
    n = len(s)
    m = len(p)
    i, j = 0, 0

    for i in range(0, n):
        while j>0 and s[i] != p[j]:
            j = pi[j-1]
        if s[i] == p[j]:
            if j == m-1:
                ans.append(i-m+1)
                j = pi[j]
            else:
                j+= 1

    return ans

if kmp(a,b):
    print(1)
else:
    print(0)