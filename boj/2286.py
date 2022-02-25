import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')

while True:
    a = list(sys.stdin.readline().rstrip())
    cnt = 0
    if dbg: print(a)
    if len(a) == 1:
        break
    for e in a:
        if e.upper() == a[0].upper():
            cnt += 1
    print(a[0],cnt-1)
