import sys
tc = int(input())

#tc = 1

def dist(a,b,c,d):
    return ((a-c)**2) + ((b-d)**2)

for _ in range(tc):
    x1,y1,x2,y2,r1,r2 = map(int, sys.stdin.readline().split())

    if x1 == x2 and y1 == y2:
        if r1 == r2:
            print(-1)
            continue
        else:
            print(0)
            continue
    d = dist(x1,y1,x2,y2)

    if ((r1-r2)**2) == d or ((r1+r2)**2) == d:
        print(1)
#    elif ((r1+r2)**2) > d and ((r1-r2)**2) < d:
    elif ((r1-r2)**2) < d:
         print(2)
    else:
        print(0)