
ans = 0

def dfs1(s,n):
    global ans
    if s == n:
        ans += 1
        return
    if s > n:
        return
    dfs(s+1,n)
    dfs(s+2,n)
    dfs(s+3,n)
    


dp = [0]*12

def go1(n):
    global ans
    ans = 0
    dfs1(1,n)
    dfs1(2,n)
    dfs1(3,n)
    print(ans)


def go(n):

    if n < 0:
        return 0
    if n <= 1:
        return 1
    if dp[n]:
        return dp[n]
    dp[n] = go(n-1) + go(n-2) + go(n-3)
    return dp[n]


if __name__ == "__main__":
    tc = int(input())
    for _ in range(tc):
        n = int(input())
        print(go(n))