'''
역 사이 최소 비용 구하기
0 번 역에서 2번으로 가는 최소 비용은?
다이내믹 접근
'''

cost = [[0, 10, 75, 94],[-1, 0, 35, 50],[-1, -1, 0, 80],[-1, -1, -1, 0]]

minCost = [ 0 for i in range(4)]

def mincost(s, d):
    minCost[0] = 0
    minCost[1] = cost[0][1]

    for i in range(2, 4):
        minCost[i] = cost[0][i]

        for j in range(1, i):
            if minCost[i] > minCost[j] + cost[j][i]:
                minCost[i] = minCost[j] + cost[j][i]
    return minCost[d]



if __name__ == "__main__":
    print(mincost(0,2))
