# -*- coding: utf-8 -*-
'''
예를 들어 A = 150, B = 266, C = 427 이라면 
A × B × C = 150 × 266 × 427 = 17037300 이 되고, 
계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
'''

a = int(input())
b = int(input())
c = int(input())

result = list(str(a * b * c))
out = []

for i in range(0,10):
    out.append(0)

for e in result:
    out[int(e)]+=1

for e in out:
    print(e)

