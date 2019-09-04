import sys

tc = int(input())
for _ in range(tc):
    h,w,n = map(int, sys.stdin.readline().split())

    H = n%h
    W = n//h+1
#    print(H,W)

    if W <= 10:
        H = H*10

    h_ = str(H)
    w_ = str(W)
    print(h_+w_)