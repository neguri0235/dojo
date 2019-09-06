import sys

x,y,w,h = map(int, sys.stdin.readline().split())

a = min(abs(x-w), abs(y-h))
b = min(x,y)
print(min(a,b))