M = int(input())
N = int(input())

data = [ 0 for i in range(101)]

for i in range(1, 101):
    data[i] = i*i
ans = 0
first = 0
for e in data:
    if e >= M and e <=N:
        ans += e
        if first == 0:
            first = e

if ans == 0:
    print(-1)
else:
    print(ans)
    print(first)
