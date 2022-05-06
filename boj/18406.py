import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')
a = list(sys.stdin.readline().rstrip())
if dbg: print(a)
s1, s2 = 0, 0
for i in range(len(a)//2):
    s1 += int(a[i])
    if dbg: print(a[i], end = ' ')
if dbg: print()

for i in range(len(a)//2, len(a)):
    s2 += int(a[i])
    if dbg: print(a[i], end = ' ')
if dbg: print()

if s1 == s2:
    print('LUCKY')
else:
    print('READY')    