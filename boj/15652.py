import sys


def search(permu, n, m , high):

    if len(permu) == m:
        for e in permu:
            print(e, end = ' ')
        print()
        return
    
    for i in range(1, n+1):

        if i <  high:
            continue
        high = i
        permu.append(i)
        search(permu, n, m, high)
        permu.pop()

n, m = map(int, sys.stdin.readline().split())

permu = list()
search(permu, n, m, 1)