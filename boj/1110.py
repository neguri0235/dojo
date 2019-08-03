# -*- coding: utf-8 -*-
'''
26부터 시작한다. 2+6 = 8이다. 새로운 수는 68이다. 6+8 = 14이다.
새로운 수는 84이다. 8+4 = 12이다.
새로운 수는 42이다. 4+2 = 6이다. 새로운 수는 26이다.
위의 예는 4번만에 원래 수로 돌아올 수 있다. 따라서 26의 사이클의 길이는 4이다.
'''
n = int(input())
count = 1
#a = n//10
#b = n%10;
c = n//10 + n%10
next = (n%10) * 10 + (c%10)
while next is not n:
#    print(next)
#    a = next//10
#    b = next%10
    c = (next//10)+(next%10)
    next = next%10*10 + (c%10)
    count+=1
print(count)