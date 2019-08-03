import sys
n = int(input())
A = list(map(int, sys.stdin.readline().split()))
P = [0] * (n+1)
P[0] = A[0]
for i in range(1,n):
    P[i] = max(max(P[i-1] + A[i], A[i]),P[i-1])
print(P)
print(P[n-1])