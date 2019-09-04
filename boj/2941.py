A = ['c=','c-','d-','lj','nj','s=','z=']
s = list(input())

mark2 = 0
mark3 = 0

for i in range(0, len(s)-2):
    a,b,c = s[i], s[i+1], s[i+2]

    if a == 'd' and b == 'z' and c == '=':
        s[i] = s[i+1] = s[i+2] = '0'
        mark3 += 1



for i in range(0, len(s)-1):
    a,b = s[i], s[i+1]
    for j in range(0, len(A)):
        if A[j][0] == a and A[j][1] == b:
            s[i] = '0'
            s[i+1] = '0'
            mark2 += 1


print(len(s) - (mark2*2) + (mark2) - (mark3*3) + mark3)