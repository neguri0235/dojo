import sys
n = int(input())
A = list(map(int, sys.stdin.readline().split()))
A.insert(0,0)

D = [0 for i in range(n+1)]

D[1] = A[1]

for i in range(2,n+1):
    for j in range(1,i+1):
        D[i] = max(D[i] , D[i-j] + A[j])
print(D[n])