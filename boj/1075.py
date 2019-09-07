def p(i):
    if i <10:
        s = '0' + str(i)
        print(s)
    else:
        s = str(i)
        print(s)
        

n = int(input())
f = int(input())
n = (n//100)*100
i = 0
while True:
    if (i+n) % f == 0:
        p(i)
        break
    i += 1