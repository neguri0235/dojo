import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')
s = list(sys.stdin.readline().rstrip())

if dbg: print(s)

ans = 0

def preprocessing(p):
    global ans
    if dbg: print(p)
    n = len(p)
    j = 0
    pi = [0 for _ in range(n)]
    for i in range(1,n):
        while j > 0 and p[i] != p[j]:
            j = pi[j-1]
        
        if p[i] == p[j]:
            pi[i] = j+1
            j += 1
            ans = max(j,ans)
        else:
            pi[i] = 0
    if dbg: print(ans)
        

for i in range(len(s)-1):
    preprocessing(s[i:-1])

print(ans)