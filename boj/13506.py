import sys
dbg = 0
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
p = pi[-1]
ans = -1
while p and ans:
    for i in range(1,len(a)-1):
        if pi[i] == p:
            print(''.join(a[0:p]))
            ans = 0
            break
    p = pi[p-1]


if  ans:
    print(-1)



