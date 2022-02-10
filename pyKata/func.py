def remove_last_item(myList):
    myList.pop(-1)


def butlast(mylist):
    return mylist[:-1]


a = [ i for i in range(10)]
print(a)
remove_last_item(a)
print(a)
butlast(a)
print(butlast(a))
print(a)

i = 0
while i< len(a):
    print(i, a[i])
    i+=1

for i , item in enumerate(a):
    print(i, item)

mylist = [0, 1, 3, -1]
if all(map(lambda x: x > 0, mylist)):
    print("All item is bigger than zero")
else:
    print('oops')


if any(map(lambda x: x > 0, mylist)):
    print('Any item is bigger than zero')
else:
    print("oops")

a = [("a",2),("e",1),("d",4)]
print(sorted(a))
print(a)
print(sorted(a, key=lambda x:x[1]))

print(list(filter(lambda x: x > 0, [-1, 0, 1, 2,]))[0])
print(next(filter(lambda x: x > 0 , [-1, 0, 1, 2]),'default'))

from functools import partial
#from first import first

def greater_than(number, min=0):
    return number > min

first([-1, 0, 1, 2], key=partial(greater_than, min=42))