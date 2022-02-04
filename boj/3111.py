import sys
import copy

dbg = 0
if dbg: sys.stdin = open('in.txt','r')

a = list(sys.stdin.readline().rstrip())
b = list(sys.stdin.readline().rstrip())

def check(dir):
    global ln
    global rn

    stk = l_stk
    leng = ln
    s = ar
    if dir:
        stk = r_stk
        leng = rn
        s = a

    if leng - n < 0:

        return False

    for i in range(n):
        if stk[leng-i-1] != s[i]:
            return False
    
    if not dir:
        ln -= n
    else:
        rn -= n

    return True


l_stk = [0 for i in range(300002)]
r_stk = [0 for i in range(300002)]

# dir 0 ->
# dir 1 <-
n = len(a)
m = len(b)

if dbg: print(n,m)

left , right = 0, len(b)-1
where = 0
ln, rn = 0, 0
ar = copy.deepcopy(a)
ar.reverse()
if dbg: print(a,ar)

while left <= right:
    if not where:
        l_stk[ln] = b[left]
        ln += 1
        left += 1
    else:
        r_stk[rn] = b[right]
        rn +=1
        right -= 1

    if check(where):
        where = 1 - where

for i in range(ln-1, -1, -1):
    r_stk[rn] = l_stk[i]
    rn += 1
    check(1)

for i in range(rn -1, -1, -1):
    print(r_stk[i],end = '')

print()    


