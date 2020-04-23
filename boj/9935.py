import sys

dbg = 0

s1 = list(sys.stdin.readline().rstrip())
s2 = list(sys.stdin.readline().rstrip())

if dbg == 1:
    print(s1)
    print(s2)


stk = []

for i in range(len(s1)):

    if s1[i] != s2[len(s2)-1]:
        stk.append(s1[i])
    else:
        k = len(s2)-2

        while len(stk):
            if stk[-1] == s2[k]:
                stk.pop()
                k -=1
            else:
                break
if dbg == 1:
    print(stk)
if len(stk) == 0:
   print("FRULA")
else:
   print(''.join(stk))


