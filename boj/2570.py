import sys

n = int(sys.stdin.readline())
data = [None]*n
for i in range(0,n):
    data[i] = int(sys.stdin.readline())

data.sort()
for e in data:
    print(e)