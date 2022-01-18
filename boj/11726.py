n = int(input())
dp = [None for i in range(n+2)]

dp[0], dp[1], dp[2] = 1, 1, 2

for i in range(2,n+1):
    dp[i] = (dp[i-1] + dp[i-2])%10007
print(dp[n])    