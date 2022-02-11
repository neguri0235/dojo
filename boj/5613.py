import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')
a = []
while True:
    op = input()
    if op == '=':
        break
    a.append(op)
if dbg: print(a)

n = int(a[0])

for i in range(1,len(a)-1, 2):
    if dbg: print(a[i],a[i+1])
    if a[i] == '+':
        n += int(a[i+1])
    elif a[i] == '-':
        n -= int(a[i+1])
    elif a[i] == '*':
        n *= int(a[i+1])
    else:
        n //= int(a[i+1])
print(n)
