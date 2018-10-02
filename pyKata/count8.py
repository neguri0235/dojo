#sol 1
print (str(list(range(1,10001))).count('8'))

#sol 2
sum = 0
for i in str(list(range(1,10001))):
    if i == '8':
        sum +=1
print(sum)

#sol 3 
count  = 0
for a in range(0,10):
    for b in range(0,10):
        for c in range(0,10):
            for d in range(0,10):
                number = [a,b,c,d]
                count += number.count(8)
print (count)