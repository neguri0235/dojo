#102
import sys
a = list(map(int, sys.stdin.readline().rstrip()))
s = 0
if len(a) == 2:
    for e in a:
        s += e
elif len(a) == 3:
    if a[0] == 1 and a[1] == 0:
        s = 10 + a[2]
    else:
        s = 10 + a[0]
else:
    s = 20
print(s)    