def pow1(n):
    string = str(2**n)
    sum = 0
    for i in string:
        sum += int(i)
    print (sum)

pow1(1000)
print (eval('+'.join(str(2**1000))))
print (sum(int(num) for num in str(2**1000)))