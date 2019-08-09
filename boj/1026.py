import sys

n = int(input())

a = map(int,sys.stdin.readline().split())
b = map(int,sys.stdin.readline().split())
'''
a.sort(reverse=False)
b.sort(reverse=True)
'''
a = sorted(a)
b = sorted(b,reverse=True)

sum = 0
for i in range(n):
    sum += a[i]*b[i]

print(sum)