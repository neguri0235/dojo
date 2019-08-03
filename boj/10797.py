import sys
A = [0] * 11
n = int(input())
data = list(map(int,sys.stdin.readline().split()))
for e in data:
    A[e] +=1
print(A[n])