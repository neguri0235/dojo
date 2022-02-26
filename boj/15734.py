import sys

a, b, c = map(int, sys.stdin.readline().split())

if a == b:
    a += c//2
    b += c//2

    print(a+b)
elif a < b:
    r = c - (b-a)
    if r <= 0:
        e = 0
    else:
        e = r//2
    a += c
    d = min(a,b)
    print(d+d+e+e)
else:
    r = c - (a-b)
    if r <= 0:
        e = 0
    else:
        e = r//2
    b += c
    d = min(a,b)
    print(d+d+e+e)


    
