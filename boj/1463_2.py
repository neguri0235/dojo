import sys

dp = [None]*1000001
dp[0] = 0
dp[1] = 1

def go(v):
    if v == 1:
        return 0

    if dp[v] > 0:
        return dp[v]

    dp[v] = go(v-1) + 1

    if v%2 == 0:
        tmp = go(n//2)+1
        dp[v] = min(tmp,dp[v])

    if v%3 == 0:
        tmp = go(n//3)+1
        dp[v] = min(tmp,dp[v])

    return dp[v]

if __name__ == "__main__":
    n = int(input())
    dp[0] = 0
    go(n)
    print(dp[n])