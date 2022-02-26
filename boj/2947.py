import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')

a = list(map(int, sys.stdin.readline().split()))
n = len(a)
b = sorted(a)

while True:

    if a == b:
        break

    for i in range(1,n):
        if a[i-1] > a[i]:
            a[i-1], a[i] = a[i], a[i-1]
            for e in a:
                print(e, end= ' ')
            print()