import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')
a = int(input())
b = int(input())
c = int(input())
if dbg:print(a,b,c)
d = list(map(int,str(a*b*c)))

p = [0 for i in range(10)]

for e in d:
    p[e] += 1

for e in p:
    print(e)
    


