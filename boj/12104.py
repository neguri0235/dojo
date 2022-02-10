import sys

dbg = 1
if dbg: sys.stdin = open('in.txt','r')

a = list(sys.stdin.readline().rstrip())
b = list(sys.stdin.readline().rstrip())

b = b * 2
b.pop()

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
    n = len(s)
    m = len(p)
    j = 0

    ans = 0

    pi = preprocessing(p)

    for i in range(n):
        while j > 0 and s[i] != p[j]:
            j = pi[j-1]
        
        if s[i] == p[j]:
            if j == m-1:
                ans += 1
                j = pi[j]
            else:
                j += 1

    return ans

ans = kmp(b,a)
print(ans)



