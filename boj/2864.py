import sys
a,b = map(int, sys.stdin.readline().split())

sa = list(str(a))
sb = list(str(b))

for i in range(0,len(sa)):
    if sa[i] == '6':
        sa[i] = '5'

for i in range(0,len(sb)):
    if sb[i] == '6':
        sb[i] = '5'
#print(sa,sb)
print(int(''.join(sa)) + int(''.join(sb)),end=' ')


for i in range(0,len(sa)):
    if sa[i] == '5':
        sa[i] = '6'

for i in range(0,len(sb)):
    if sb[i] == '5':
        sb[i] = '6'
#print(sa,sb)
print(int(''.join(sa)) + int(''.join(sb)))