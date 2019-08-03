#1924.py
import sys
m , d = map(int, sys.stdin.readline().split())
day = ['SUN','MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT'];

#print (m, d) 
#print(day)
days = [31,28,31,30,31,30, 31,31,30,31,30,31]

sum = 0
for i in range(0,m-1):
    sum += days[i]

sum += d

#print(sum)
ans = sum%7
print(day[ans])