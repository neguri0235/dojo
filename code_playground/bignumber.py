import sys
dbg = 1
if dbg: sys.stdin = open('./in.txt','r')

n, m, k = map(int, sys.stdin.readline().split())
data = list(map(int, sys.stdin.readline().split()))
data.sort(reverse = True)
a, b  = data[0], data[1]
print(n, m, k, a, b)

ans = 0
idx = 0
while idx < m:
    for j in range(k):
        ans += a
        idx += 1
    ans += b
    idx +=1
print(ans)

