import sys
import math

N,M = map(int, sys.stdin.readline().split())

A = [1] * (M+1)
A[1] = 0

for i in range(2, int(math.sqrt(M)+1)):
#    print(i)
    for j in range(2, M+1):
        x = i*j

        if x > M:
            break
        if A[x] == 1:
            A[x]  = 0
#print('--------------')
for i in range(N,M+1):
    if A[i]:
        print(i)