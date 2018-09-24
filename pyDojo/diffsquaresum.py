def diff(n):
    sum1 = 0
    sum2 = 0

    for i in range(1,n+1):
        sum1 +=i**2
    for i in range(1,n+1):
        sum2 += i
    sum2 =  sum2**2

    return (abs(sum1-sum2))

