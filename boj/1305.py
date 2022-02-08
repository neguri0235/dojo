import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(sys.stdin.readline())
s = list(sys.stdin.readline().rstrip())

def preprocessing(p):
    n = len(p)
    pi = [0 for _ in range(n)]
    j = 0
    for i in range(1,n):
        while j>0 and p[i] != p[j]:
            j = pi[j-1]
        
        if p[i] == p[j]:
            pi[i] = j+1
            j += 1
        else:
            pi[i] = 0
    return pi



pi = preprocessing(s)
if dbg: print(pi)

print(n - pi[n-1])