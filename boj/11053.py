'''
6
10 20 10 30 20 50
'''
# 1 2 3 4 5 6

import sys

#sys.stdin = open('11053.txt','r')

order = list()
#n = int(input())
#data = map(int, sys.stdin.readline().split())

order.append(1)
order.append(2)
order.append(3)
order.append(4)
order.append(5)

print(order)


def lower_bound(value):
    
    start = 0
    end = len(order)
    mid = (start + end)//2
    while start < end:
        
        if order[mid] == value:
            return mid
        elif order[mid] < value:
            start = mid
        else:
            end = mid
    return mid

print(lower_bound(1))