#n = int(input())
n = 3
D = [0 for i in range(102)]
v = 1

dbg = 1
D[1] = 2
for i in range(2,102):
    if not i%2:
        v += 1
    D[i] = v + D[i-1]


if dbg:
    for i in range(1,10):
        print(D[i], end = ' ')
    print()

print(D[n])