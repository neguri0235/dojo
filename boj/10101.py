import sys
dbg = 0

if dbg: sys.stdin = open('in.txt','r')

input = sys.stdin.readline

def pow(n):
    return n*n

a = []
i = int(input())
j = int(input())
k = int(input())

a.append(i)
a.append(j)
a.append(k)
a.sort()

print(a)

if sum(a) != 180:
    print('Error')
elif a[0] == 60 and a[1] == 60 and a[2] == 60:
    print('Equilateral')
elif a[0] == a[1] or a[1] == a[2]:
    print('Isosceles')
else:
    print('Scalene')



