import sys

n = int(input())
p = list()

for _ in range(n):
    a = int(input())
    p.append(a)

q = p[0]
if q >= max(p):
    print('S')
else:
    print('N')
    


