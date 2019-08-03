import sys

data = []
sum = 0

for _ in range(9):
    i = int(sys.stdin.readline())
    data.append(i)
    sum += i
find = sum - 100
data.sort()

i = 0
j = 8
while i != j:
    if data[i] + data[j] < find:
        i += 1
    elif data[i] + data[j] > find:
        j -= 1
    else:
        break
del data[j]
del data[i]
for e in data:
    print(e)