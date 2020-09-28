'''
역 사이 최소 비용 구하기
0 번 역에서 2번으로 가는 최소 비용은?
'''

cost = [[0, 10, 75, 94],[-1, 0, 35, 50],[-1, -1, 0, 80],[-1, -1, -1, 0]]


def mincost(s, d):

    if s == d or s == d-1:
        return cost[s][d]

    min_ = cost[s][d]

    for i in range(s+1, d):
        temp = mincost(s, i) + mincost(i, d)
        if temp < min_:
            min_ = temp
    return min_


if __name__ == "__main__":
    print(mincost(0,2))
