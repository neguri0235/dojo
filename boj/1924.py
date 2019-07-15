'''
첫째 줄에 빈 칸을 사이에 두고 x(1≤x≤12)와 y(1≤y≤31)이 주어진다. 
참고로 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지,
4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.

'''
mon, day = map(int,  input().split())

month = [0,31,28,31,30,31,30,31,31,30,31,30,31]

days = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']

tot_day = 0

for i in range(0,mon):
    tot_day +=month[i]

print(tot_day)

tot_day += day
print(tot_day)
ans = days[tot_day%7]
print(ans)
    