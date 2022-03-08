import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
for i in range(n):
    a = list(map(int, sys.stdin.readline().split()))
    a.sort()
    if a[2]**2 == a[0]**2 + a[1]**2:
        print('Scenario #{0}:'.format(i+1))
        print('yes')
    else:
        print('Scenario #{0}:'.format(i+1))
        print('no')
    print()
