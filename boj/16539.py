import sys

dbg = 1

a, b = 5, 3
if dbg:
    pass
else:
    a, b = map(int, sys.stdin.readline().split())

D = [ [ 0 for i in range(33)] for j in range(33)]

D[0][0] = 1

for i in range(1,31):
    for j in range(1,31):
        D[i][j] = D[i-1][j-1] + D[i-1][j]
print(D[a][b])        