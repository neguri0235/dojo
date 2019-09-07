import sys
import logging
N,M = map(int, sys.stdin.readline().split())

#logging.info(N)

A = list()
D = [[0 for i in range(1001)] for j in range(1001)]
A.append([ 0 for i in range(M+1)])
for _ in range(N):
    a = list(map(int, sys.stdin.readline().split()))
    a.insert(0,0)
    A.append(a)
#print(A)

for i in range(1, N+1):
    for j in range(1,M+1):
        D[i][j] = A[i][j] + max(D[i-1][j], D[i][j-1])

print(D[N][M])
