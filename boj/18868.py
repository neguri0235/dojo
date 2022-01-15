import sys

dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n, m = map(int, sys.stdin.readline().split())
a = []
for i in range(n):
    p = list(map(int, sys.stdin.readline().split()))
    arr = sorted(p)
    idx = []
    for j in p:
        idx.append(arr.index(j)+1)
    a.append(idx)

    

ans = 0
for i in range(n-1):
    for j in range(i+1, n):
        if a[i] == a[j]:
            ans += 1
print(ans)            
