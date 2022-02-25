import sys
dbg = 1
if dbg: sys.stdin = open('in.txt','r')

d = {'-':0,'\\':1,'(':2,'@':3,'?':4,'>':5,'&':6,'%':7,'/':-1}

def pow(p):
    return 8**p
    
    

def calc(a):
    ans = 0
    for i in range(len(a)):
        ans += d[a[i]]*pow(i)
    return ans

while True:
    a = list(sys.stdin.readline().rstrip())
    #a = [item.replace('/','$') for item in a]
    if a[0] == '#':
        break

    a.reverse()
    print(calc(a))