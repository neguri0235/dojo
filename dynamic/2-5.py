'''
역 사이 최소 비용 구하기
0 번 역에서 2번으로 가는 최소 비용은?
메모 기법을 사용하면?
'''

cost = [[0, 10, 75, 94],[-1, 0, 35, 50],[-1, -1, 0, 80],[-1, -1, -1, 0]]

dp = [ [0 for j in range(4)] for i in range(4)]

def mincost(s, d):

    if s == d or s == d-1:
        return cost[s][d]

    if dp[s][d]:
        return dp[s][d]

    min_ = cost[s][d]

    for i in range(s+1, d):
        temp = mincost(s, i) + mincost(i, d)
        if temp < min_:
            min_ = temp
    dp[s][d] = min_
    return dp[s][d]


if __name__ == "__main__":
    print(mincost(0,2))
