import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

n = int(input())
for _ in range(n):
    a = list(sys.stdin.readline().rstrip())
    good, bad = 0, 0

    for e in a:
        if e.lower() == 'g':
            good +=1
        elif e.lower() == 'b':
            bad += 1
        else:
            pass
    if good > bad:
        print(''.join(a),'is GOOD') 
    elif good == bad:
        print(''.join(a),'is NEUTRAL') 
    else:
        print(''.join(a),'is A BADDY') 