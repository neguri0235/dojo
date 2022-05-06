import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

while True:
    p = list(sys.stdin.readline().lower().split())

    if p[0] == 'eoi':
        break
    f = False
    for e in p:
        if e == 'nemo' or e =='nemo.' or e == 'nemo,':
            f = True
    if f:
        print("Found")
    else:
        print('Missing')
    