import sys

visit = [0]*9


def search(permu, n,m):

    if len(permu) == m:
        for e in permu:
            print(e, end= ' ')
        print()
    else:
        for i in range(1, n+1):
            if visit[i] == True:
                continue
            visit[i] = True
            permu.append(i)
            search(permu, n, m)
            visit[i] = False
            permu.pop()



n, m = map(int, sys.stdin.readline().split())
permu = []
search(permu,n,m)

