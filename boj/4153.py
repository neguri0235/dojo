import sys

while True:
    a1, b1, c1 = map(int, sys.stdin.readline().split())

    if a1 == b1 == c1 == 0:
        break

    a , b, c = 0, 0 , 0
    if a1 > b1 and a1 > c1:
        a,b,c = b1, c1, a1

    elif b1 > a1 and b1 > c1:
        a,b,c = a1, c1, b1
    else:
        a,b,c = a1,b1,c1
    

    if (a**2 + b**2) == c**2:
        print('right')
    else:
        print('wrong')

