import sys

n  = int(input())
data = []
for _ in range(n):
    a,b = list(map(int,  sys.stdin.readline().split()))
    data.append((a,b))

#print(data)

data = sorted(data)
#print(data)

dp = [0 for i in range(20)]

for k in range(n):
    dp[k] = 1
    for i in range(k+1):

        if data[i][1] < data[k][1]:
            dp[k] = max(dp[k], dp[i]+1)

print(n - max(dp))