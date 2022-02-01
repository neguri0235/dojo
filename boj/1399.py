import sys
sys.setrecursionlimit(10000)

n = int(input())

D = [0 for i in range(36)]
D[0] = 1
D[1] = 1
D[2] = 2
D[3] = 5

for i in range(0, n+1):
    D[i] = D[i]*D[n-i]

print(D)

print(D[n])