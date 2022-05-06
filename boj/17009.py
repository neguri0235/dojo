import sys
a = 0
b = 0
for i in range(1,4):
    a += int(input()) * (4-i) 

for i in range(1,4):
    b += int(input()) * (4-i) 
if a>b:
    print('A')
elif a < b:
    print('B')
else:
    print('T')