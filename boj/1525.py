import sys
from collections import defaultdict, deque

sys.stdin = open('in.txt','r')

a = [ ]

def conv(num):
    nums = 0
    for i in range(9):
        nums = int(num[i]) + nums* 10 
    return nums

for i in range(3):
    p = list(map(int, sys.stdin.readline().split()))
    for j in range(3):      
        a.append(p[j])

for i in range(9):
    if a[i] == 0:
        a[i] = 9

print(a)

q = deque([])
f = 123456789
ans = -1
q.append([conv(a),0])
check = defaultdict(int)
while len(q):
    p, num = q.popleft()
    

#    print(p, num)

    if p == f:
        ans = num
        break

    i = 0
    for e in range(9):
        if str(p)[e] == '9':
            i = e
            break

    if i == 0:
        arr = list(str(p))
        arr[0], arr[1] = arr[1], arr[0]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[0], arr[3] = arr[3], arr[0]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

    if i == 1:
        arr = list(str(p))    
        arr[0], arr[1] = arr[1], arr[0]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[1], arr[2] = arr[2], arr[1]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[1], arr[4] = arr[4], arr[1]        
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

    if i == 2:
        arr = list(str(p))
        arr[1], arr[2] = arr[2], arr[1]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[2], arr[5] = arr[5], arr[2]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

    if i == 3:
        arr = list(str(p))
        arr[0], arr[3] = arr[3], arr[0]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[3], arr[4] = arr[4], arr[3]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[3], arr[6] = arr[6], arr[3]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

    if i == 4:
        arr = list(str(p))
        arr[1], arr[4] = arr[4], arr[1]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[3], arr[4] = arr[4], arr[3]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[4], arr[5] = arr[5], arr[4]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[4], arr[7] = arr[7], arr[4]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

    if i == 5:
        arr = list(str(p))
        arr[2], arr[5] = arr[5], arr[2]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[4], arr[5] = arr[5], arr[4]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[5], arr[8] = arr[8], arr[5]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

    if i == 6:
        arr = list(str(p))
        arr[3], arr[6] = arr[6], arr[3]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[6], arr[7] = arr[7], arr[6]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

    if i == 7:
        arr = list(str(p))
        arr[4], arr[7] = arr[7], arr[4]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[6], arr[7] = arr[7], arr[6]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))
        arr[7], arr[8] = arr[8], arr[7]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

    if i == 8:
        arr = list(str(p))    
        arr[5], arr[8] = arr[8], arr[5]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])

        arr = list(str(p))     
        arr[7], arr[8] = arr[8], arr[7]
        s = conv(arr)
        if not s in check:
            check[s] = 1
            q.append([s,num+1])
print(ans)