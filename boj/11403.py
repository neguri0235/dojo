import sys
import logging
import collections

logging.basicConfig(level=logging.DEBUG, format=' %(asctime)s = %(levelname)s - %(message)s')
#logging.disable(logging.DEBUG)

A = [ ]
D = [ [0 for i in range(101)] for j in range(101)]

n = int(input())

for i in range(n):
    data = list(map(int, sys.stdin.readline().split()))
    A.append(data)

logging.debug(A)

d = collections.deque()
for i in range(n):
    d.append(1)
    while d.count():
        next = d.popleft()
        D[i][next] = 1
        d.append(next)