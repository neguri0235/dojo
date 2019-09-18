
cnt = 0

for i in range(2,10000+1,2):
    n = i

    if n%2 == 0:
        n = n*3+1

    while True:
        if n%2 == 0:
            n = n//2
        else:
            n = n*3+1
        if n == 1:
            break
        if n == i:
            cnt +=1
            break
print(cnt)