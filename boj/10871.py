import sys
n , x = map(int, sys.stdin.readline().split())
lst = list(map(int,sys.stdin.readline().split()))

for e in lst:
        if e < x:
                print(e, end=' ')