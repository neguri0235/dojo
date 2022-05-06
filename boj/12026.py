import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')
n = int(input())
a = list(sys.stdin.readline().rstrip())
a.insert(0,'0')
d = [-1 for i in range(n+2)]

if dbg: print(a)

d[1] = 0
for i in range(1, n):
    if d[i] == -1:
        continue
    c = a[i]

    if c == 'B':
        for j in range(i+1,n+1):
            if a[j] == 'O':
                if d[j] == -1 or d[j] > (j-i)**2+d[i]:
                    d[j] = (j-i)**2 + d[i]
    
    if c == 'O':
        for j in range(i+1,n+1):
            if a[j] == 'J':
                if d[j] == -1 or d[j] > (j-i)n**2+d[i]:
                    d[j] = (j-i)**2 + d[i]
    
    if c == 'J':
        for j in range(i+1,n+1):
            if a[j] == 'B':
                if d[j] == -1 or d[j] > (j-i)**2+d[i]:
                    d[j] = (j-i)**2 +d[i]
if dbg: print(d)
print(d[n])



