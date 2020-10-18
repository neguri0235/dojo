cost = [[0, 10, 75, 94],
        [-1, 0, 35, 50],
        [-1, -1, 0, 80],
        [-1, -1, -1, 0]]

dp = [[0 for i in range(4)] for j in range(4)]


def mincost(s, d):
    if s == d or s == -1:
        return cost[s][d]
    if dp[s][d]:
        return dp[s][d]

    min_cost = cost[s][d]

    for i in range(s+1, d):
        temp = mincost(s, i) + mincost(i, d)
        if temp < min_cost:
            min_cost = temp
    dp[s][d] = min_cost
    return dp[s][d]


if __name__ == "__main__":
    r = mincost(0, 1)
    print(r)
