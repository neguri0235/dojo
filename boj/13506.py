import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')
a = list(sys.stdin.readline().rstrip())
if dbg: print(a)


def preprocessing(p):
    n = len(p)
    j = 0
    pi = [ 0 for _ in range(n)]
    
    for i in range(1, n):
        while j > 0 and p[i] != p[j]:
            j = pi[j-1]
        
        if p[i] == p[j]:
            pi[i] = j + 1
            j +=1
        else:
            pi[i] = 0
    if dbg: print(pi)
    return pi

pi = preprocessing(a)
n = len(a)

cnt = [0 for i in range(n+1)]

for i in range(n-1):
    cnt[pi[i]] += 1

if dbg: print(cnt)
i = n
ans = -1
while i and ans:
    if cnt[i] >= 1:
        print(''.join(a[0:i]))
        ans = 0
    i = pi[i-1]
if ans:
    print(ans)




