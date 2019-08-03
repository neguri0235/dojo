n = int(input())

for i in range(1,n+1):
    j = i*2-1
    for k in range(0,n-i):
        print(' ',end='')
    for l in range(j):
        print('*',end='')
    print()