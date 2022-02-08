import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

ans = 0

n = int(sys.stdin.readline())
a = []
for _ in range(3):
    x, y = map(int, sys.stdin.readline().split())
    if x > y:
        x, y = y, x
    a.append([x,y])

if dbg: print(a)

# 1st
x, y = a[0]
e = (x+y)/2
s = e - (n - e)
if s < 0:
    pass
else:
    s = 0

n = e
if dbg: print('start,end: ', s,e)

x1, y1 = a[1]

if e < x1:
    x1 = e - (x1 -e)

if e < y1:
    y1 = e - (y1 -e)

if dbg: print('1st x1, y1: ',x1, y1)

x2, y2 = a[2]

if e < x2:
    x2 = e - (x2 -e)

if e < y2:
    y2 = e - (y2 -e)

if dbg: print('1st x2, y2: ',x2, y2)
if dbg: print('-------------------')
# 2nd

if not x1 == y1:
    pass
else:
    if dbg: x1, y1 = 1, 3
    n - e
    e = (x1+y1)/2
    s1 = e - (n - e)
    n = e
    if dbg: print('2nd x2, y2: ',s, e)

if dbg: print('-------------------')
# 3rd
if x2 == y2:
    pass
else:
    pass

print(ans)