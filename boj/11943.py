import sys

a,b = map(int, sys.stdin.readline().split())
c,d = map(int, sys.stdin.readline().split())

if a+d > c+b:
    print(c+b)
else:
    print(a+d)