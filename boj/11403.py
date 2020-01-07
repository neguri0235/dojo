import sys
import logging

logging.basicConfig(level=logging.DEBUG, format=' %(asctime)s = %(levelname)s - %(message)s')
logging.disable(logging.DEBUG)

A = [ ]
D = [ [0 for i in range(101)] for j in range(101)]

n = int(input())

for i in range(n):
    data = list(map(int, sys.stdin.readline().split()))
    A.append(data)

for e in A:
    logging.debug(e)

def go(c):
    for i in range(n):
        if A[c][i] == 1 and V[i] == 0:
            V[i] = 1
            go(i)

for i in range(n):
    V = [0]*n
    for j in range(n):
        if A[i][j]:
            V[j] = 1
            go(j)
    logging.debug(V)
    for e in V:
        print(e, end = ' ')
    print()