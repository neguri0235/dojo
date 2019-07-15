import sys

n = int(input())

if n == 4 or n == 7 :
    print('-1')
    sys.exit()

a = n%5
if a is 1 or a is 3:
    a = n//5 + 1
    print(a)
else:
    a = n//5 + 2
    print(a)