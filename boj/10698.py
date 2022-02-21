import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
for i in range(n):
    a = list(sys.stdin.readline().split(' '))

    if a[1] == '+':
        ans = int(a[0]) + int(a[2])
        if ans == int(a[4]):
            print('Case %d: %s' %(i+1,"YES"))
        else:
            print('Case %d: %s' %(i+1,"NO"))
    else:
        ans = int(a[0]) - int(a[2])
        if ans == int(a[4]):
            print('Case %d: %s' %(i+1,"YES"))
        else:
            print('Case %d: %s' %(i+1,"NO"))