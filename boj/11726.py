n = int(input())

D = [0] * 1001
D[0] = 1
D[1] = 1

for i in range(2,1001):
    D[i] = D[i-1] + D[i-2]

print(D[n]%10007)