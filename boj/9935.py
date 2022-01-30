import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

a = list(sys.stdin.readline().rstrip())
b = list(sys.stdin.readline().rstrip())

if dbg: print(a,'\n', b)

D = [ 1 for i in range(len(a)+1)]
ans = []
if len(b) == 1:
    for e in a:
        if e != b[0]:
            ans.append(e)
elif len(a) < len(b):
    for e in a:
        ans.append(e)
else:
    stk = []

    for i in range(len(a)):
        if a[i] == b[0]:
            stk.append([i,0])
        else:
            if len(stk):
                atop, btop = stk[-1]
                if dbg: print(atop, btop)

                if a[i] == b[btop+1]:
                    stk.append([i,btop+1])

                    if (btop + 1) == len(b)-1:
                        for i in range(len(b)):
                            atop, btop = stk.pop()
                            D[atop] = 0
                else:
                    stk.clear()

    for i in range(len(a)):
        if D[i]:
            ans.append(a[i])

if not len(ans):
    print('FRULA')
else:
    for e in ans:
        print(e,end='')
    print()