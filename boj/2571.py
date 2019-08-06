import sys

n = int(input())

A = [0]*n

for i in range(n):
    A[i] = int(sys.stdin.readline())
A.sort()

for e in A:
    print(e)