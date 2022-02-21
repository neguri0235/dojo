import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')
a = list(map(int, sys.stdin.readline().split()))
b = list(map(int, sys.stdin.readline().split()))


win = False
rev = False
aa , bb = 0, 0

for i in range(len(a)):
    aa += a[i]
    bb += b[i]
    
    if aa > bb:
        win = True
    
    if win == True and aa < bb:
        rev = True

if rev:
    print("YES")
else:
    print("NO")