import sys

sys.stdin = open('11404.txt','r')

n = int(input())
m = int(input())
max_ = 1000000000
A = [ [ max_ for i in range(n+1)] for j in range(n+1)]

for _ in range(m):
    a,b,c = map(int,sys.stdin.readline().split())
    if A[a][b] > c:
        A[a][b] = c
#    A[b][a] = c
    

for i in range(1,n+1):
    for j in range(1,n+1):
        if i == j:
            A[i][j] = 0

for k in range(1,n+1):
    for i in range(1,n+1):
        for j in range(1,n+1):

            if  A[i][j] > (A[i][k] + A[k][j]):
                A[i][j] = A[i][k] + A[k][j]


for i in range(1,n+1):
    for j in range(1,n+1):
        if A[i][j] == max_:
            A[i][j] = 0
        print(A[i][j],end = ' ')
    print()