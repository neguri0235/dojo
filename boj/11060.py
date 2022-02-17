import sys
dbg = 1 
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
a = list(map(int, sys.stdin.readline().split()))
if dbg: print(a)
dp = [ -1 for i in range(n)]
dp[0] = 0

for i in range(1,n):
    j = 0
    while j < i:
        if dp[j] != -1 and i-j <= a[j]:
            if dbg: print(i,j)
            if dp[i] == -1 or dp[i] > dp[j] + 1:
                dp[i] = dp[j] + 1
        j += 1

print(dp[n-1])
if dbg: print(dp)
