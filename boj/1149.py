import sys
n = int(sys.stdin.readline())

#A = [[0]* (3) for i in range(n+1)]
D = [[0]* (3) for i in range(n+1)]

for i in range(1,n+1):
    r,g,b = map(int,sys.stdin.readline().split())
    D[i][0] = min(D[i-1][1], D[i-1][2]) + r
    D[i][1] = min(D[i-1][0], D[i-1][2]) + g
    D[i][2] = min(D[i-1][0], D[i-1][1]) + b

print(min(D[n]))