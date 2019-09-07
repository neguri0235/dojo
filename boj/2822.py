from collections import OrderedDict

D = {}

for i in range(1,9):
    a = int(input())
    D[a] = i


D = OrderedDict(sorted(D.items(), key=lambda t: t[0], reverse=True))
#print(type(D))
#print(D)
sum  = 0
a = []
i = 0
for key, val in D.items():
#    print(key, val)
    sum += key
    a.append(val)
    if i == 4:
        break
    i+=1


print(sum)
a = sorted(a)
for e in a:
    print(e,end=' ')
