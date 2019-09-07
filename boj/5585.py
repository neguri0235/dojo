
# 500, 100, 50, 10, 5, 1

n = 1000 - int(input())
#print(n)

c = 0

a = [500, 100, 50, 10, 5, 1]

for i in range(0, len(a)):
    c += n//a[i]
#    print(a[i],c,n)
    n = n%a[i]
print(c)