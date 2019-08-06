X = int(input())
x = X*2

n = 0

for i in range(0,10000000):
    if (i*i + i) >= x:
        n = i
        break
sum = X - (n-1)*(n)//2
#print(n)
#print(sum)

if n % 2: # odd number
#    print((n-sum+1),'/',sum)
    print('{0}{1}{2}'.format((n-sum+1),'/',sum))
else: # even number
#    print(sum,'/',(n-sum+1))
    print('{0}{1}{2}'.format(sum,'/',(n-sum+1)))
