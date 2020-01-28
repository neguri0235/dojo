import sys


visit = [0] * 9

def search(permu, n, m, high):
    
    if len(permu) == m:
#        print(permu)
        for e in permu:
            print(e, end = ' ')
        print()
    else:

        for i in range(1, n+1):

            if visit[i] == True:
                continue
            
            if i <= high:
                continue

            high = i

            visit[i] = True
            permu.append(i)
            search(permu, n, m, high)
            permu.pop()
            visit[i] = False

    

n, m = map(int, sys.stdin.readline().split())
permu = []
search(permu, n, m, 0)