import sys

n = int(input())
for i in range(n):
    data = list(map(int, sys.stdin.readline().split()));
    m = 100
    s = 0

    for e in data:
        if e%2 == 0:
            s += e
            m = min(m,e)
    print(s,m)