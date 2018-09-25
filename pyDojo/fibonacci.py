def fib1(n):

    if n == 1 or n == 0:
        return n
    else:
        return fib1(n-1) + fib1(n-2)
print(fib1(10))


def fib2(n):
    l = [0,1]
    for i in range(2,n+1):
        l.append(l[i-1] + l[i-2])
    print (l)
fib2(10)