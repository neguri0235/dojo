import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')

n, s, m = map(int, sys.stdin.readline().split())
a = list(map(int, sys.stdin.readline().split()))

d = [[-1 for i in range(m+2)] for _ in range(n+1)]

d[0][s] = 1
for i in range(1,n+1):
    for j in range(m+1):
        if d[i-1][j] == 1 and j+a[i-1] <= m:
            d[i][j+a[i-1]] = 1
        if d[i-1][j] == 1 and j-a[i-1] >=0:
            d[i][j-a[i-1]] = 1

ans = -1
for i in range(m+1):
    if d[n][i] == 1:
        ans = i
print(ans)
