
D = [ [0 for i in range(15)] for j in range(15)]

for i in range(1,15):
    D[0][i] = i

for i in range(1,15):
    D[i][1] = 1

for i in range(1,15):
    for j in range(1,15):
        D[i][j] = D[i-1][j] + D[i][j-1]
'''
for i in range(1,15):
    print(D[1][i],end = ' ')
'''

tc = int(input())
for _ in range(tc):
    k = int(input())
    n = int(input())

    print(D[k][n])