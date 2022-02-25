import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

def calc(i,j,a,D):

    if i == j:
        return 0

    if D[i][j] != -1:
        return D[i][j]

    sum = 0
    for k in range(i,j+1):
        sum += a[k]
    
    for k in range(i,j+1):
        temp = calc(i,k,a,D) + calc(k+1,j,a,D) + sum

        if temp < D[i][j] or D[i][j] == -1:
            D[i][j] = temp

    return D[i][j]


t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, sys.stdin.readline().split()))
    D = [[-1 for i in range(n+2)] for j in range(n+2)]
    print(calc(0,n-1,a,D))