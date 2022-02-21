import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')


k = list(sys.stdin.readline().rstrip())
s = list(sys.stdin.readline().rstrip())
a = []
idx = 0
for e in s:
    for i in range(idx+1,len(k)):
        if k[i] == e:
            a.append(i)
            idx = i
            break
ans = 0
if len(a) == len(s):
    ans = 1
else:
    ans = 0

for i in range(len(a)-1):
    if a[i+1]-a[i] == 1:
        ans = 0
print(ans)