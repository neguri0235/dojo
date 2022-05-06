t = int(input())
d = [0] * 1000001

for i in range(1,1000001):
    s = 0
    for j in range(1,i+1):
        s += i//j*j
    d[i] = s

for _ in range(t):
    n = int(input())
    print(d[n])
    
