import sys
tc = int(input())

for i in range(tc):
    n = int(input())
    school = ''
    number = 0
    for j in range(n):
        sch, num = sys.stdin.readline().split()
        if number < int(num):
            number = int(num)
            school = sch
    print(school)