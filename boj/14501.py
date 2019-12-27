import sys

n  = int(input())
data = []
dp = [ 0 for i in range(n*10)]

for _ in range(n):
    a,b = list(map(int, sys.stdin.readline().split()))
    data.append((a,b))


for i in range(n):
    day, money = data[i]
    
    dp[i+1] = max(dp[i], dp[i+1])
    dp[i+day] = max(dp[i+day], dp[i] + money)
print(dp[n])