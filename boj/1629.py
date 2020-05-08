import sys

def go(a,b,c):
    if b == 0:
        return 1
    elif b == 1:
        return a%c
    elif b%2 == 0:
        r = go(a,b/2,c)
        return r*r%c
    else:
        return a*go(a,b-1,c)%c

A,B,C = map(int, input().split())
print(go(A,B,C))

