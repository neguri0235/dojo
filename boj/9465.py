import sys


tc = int(input())

for _ in range(tc):
    A = []
    n = int(input())
    a = list(map(int, sys.stdin.readline().split()))
    a.insert(0,0)

    A.append(a)
    b = list(map(int, sys.stdin.readline().split()))
    b.insert(0,0)
    A.append(b)

    D = [ [0 for i in range(100001)] for j in range(2)]

    D[0][1] = A[0][1]
    D[1][1] = A[1][1]
    
    for i in range(2,n+1):
        D[0][i] = max(max(D[1][i-1], D[0][i-2]),D[1][i-2]) + A[0][i]
        D[1][i] = max(max(D[0][i-1], D[1][i-2]),D[0][i-2]) + A[1][i]
    
    print(max(D[0][n],D[1][n]))
