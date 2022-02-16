import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')
n = int(input())
a = list(map(int, sys.stdin.readline().split()))

m = 0
y = 0

for e in a:
    y += (e//30+1) * 10
    
    m += (e//60 + 1) * 15
    
if dbg:
    print(m,y)
if m == y:
    print("Y M",m)
elif m < y:
    print("M",m)
else:
    print("Y",y)
