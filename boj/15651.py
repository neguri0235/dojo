import sys


def search(permu, n, m):

    if len(permu) == m:
        for e in permu:
            print(e, end = ' ')
        print()
        return
    
    for i in range(1, n+1):

        permu.append(i)
        search(permu, n, m)
        permu.pop()

n, m = map(int, sys.stdin.readline().split())
permu = []
search(permu, n, m)