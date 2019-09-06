import sys

tc = int(input())
for _ in range(tc):
    h,w,n = map(int, sys.stdin.readline().split())

    H = n % h

    if H == 0 :
        H = h
    
    W = n // h

    if n == h:
        W = 1
    else:
        if n% h == 0:
            W = W
        else:
            W += 1
        

    if W <10:
        H = H*10

    h_ = str(H)
    w_ = str(W)
    print(h_+w_)