import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')
n = int(input())

t = [0 for i in range(n)]
p = [0 for i in range(n)]

for i in range(n):
    a, b = map(int, sys.stdin.readline().split())
    t[i], p[i] = a, b
if dbg:
    print(t)
    print(p)

dp = [ 0 for i in range(n+1)]

for i in range(n):
    dp[i+1] = max(dp[i], dp[i+1])
    if t[i] + i > n: continue
    dp[t[i] + i] = max(dp[i] + p[i], dp[t[i]+i])

print(dp[n])


    