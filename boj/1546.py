#1546.py
import sys

n = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))

A.sort()
max_value = A[-1]
sum = 0

for e in range(0,n):
    sum += (A[e]/max_value)*100
#    print(sum, e/max_value)

new_mean = sum/n
print(new_mean)