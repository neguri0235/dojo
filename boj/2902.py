import sys

data = list(sys.stdin.readline().rstrip().split('-'))
for e in data:
    print(e[0],end='')