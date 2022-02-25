import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

tc = int(input())
for _ in range(tc):
    a = int(input())

    cnt = 0
    for i in range(1,a):
        if not a%i:
            cnt += 1
    print(a,cnt+1)