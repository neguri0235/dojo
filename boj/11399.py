import sys

n = int(input())

A = list(map(int, sys.stdin.readline().split()))
A.sort()
sum = A[0]
tot = A[0]

for i in range(1,n):
    sum += A[i]
    tot += sum
print(tot)