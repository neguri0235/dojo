import sys

n = int(input())

data = list(map(int, sys.stdin.readline().split()))
dp = [0 for i in range(1002)]

for k in range(n):
    dp[k] = 1

    for i in range(k+1):
        if (data[i] < data[k]):
             dp[k] = max(dp[k], dp[i]+1)
#print(dp)
print(max(dp))
