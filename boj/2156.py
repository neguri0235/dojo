import sys
n = int(input())

A = [0]*(n+2)
D = [0]*(n+2)



for i in range(1,n+1):
    A[i] = int(sys.stdin.readline())

D[1] = A[1]
D[2] = A[1] + A[2]
ans = D[2]
for i in range(3,n+1):
    temp2 = max((D[i-2], A[i-1] + D[i-3])) + A[i]
    temp1 = max(D[i-1],temp2)
    D[i] = max(temp1,temp2)
    ans = max(D[i],ans)
print(D)
print(ans)