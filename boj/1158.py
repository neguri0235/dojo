import collections
import sys

N,K = map(int, sys.stdin.readline().split())

A = [0] * N
D = list()

for i , _ in enumerate(A):
    A[i] = i+1

idx = K-1

while len(A) != 1:
    D.append(A[idx])
    del(A[idx])
    idx = (idx + K - 1)%len(A)
D.append(A[0])

print('<',end='')

for i in range(0,N-1):
    print(D[i],end=', ')

print(D[N-1],end='>')