import sys
data = list(map(int,sys.stdin.readline().split()))
sum = 0
for e in data:
    sum += e*e
print(sum%10)