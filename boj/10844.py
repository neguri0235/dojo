n = int(input())

d = [ [ 0 for i in range(10)] for j in range(101)]

for i in range(1,10):
    d[0][i] = 1

for i in range(1,n):
    for j in range(0,10):
        if j == 0:
            d[i][j] += d[i-1][1]
        elif j == 9:
            d[i][j] += d[i-1][8]
        else:
            d[i][j] += (d[i-1][j-1] + d[i-1][j+1])%1000000000

sum = 0
for i in range(10):
    sum += (d[n-1][i])
print(sum%1000000000)
