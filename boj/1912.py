import sys
n = int(input())
A = list(map(int, sys.stdin.readline().split()))
P = [0] * (n+1)
P[0] = A[0]
ans = P[0]
for i in range(1,n):
    P[i] = max(P[i-1] + A[i], A[i])
    ans = max(ans,P[i])
print(ans)