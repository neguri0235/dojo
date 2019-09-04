tc = int(input())

D = [0]*101

D[1] = D[2] = D[3] = 1
for i in range(4, 101):
    D[i] = D[i-2] + D[i-3]

for _ in range(tc):
    n = int(input())
    print(D[n])
