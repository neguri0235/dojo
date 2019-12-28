import sys

n  = int(input())

dp = [0 for i in range(40002)]

data = list(map(int, sys.stdin.readline().split()))

for k in range(n):
    dp[k] = 1

    for i in range(k+1):
         if data[i] < data[k]:
                dp[k] = max(dp[k] , dp[i]+1)

print(max(dp))