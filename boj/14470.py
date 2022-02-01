a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

ans = 0

if a < 0:
    ans += -a * c
    ans += d
    ans += b*e   

if a == 0:
    ans += d 
    ans += b*e 

if a > 0:
    ans += (b-a)*e 
print(ans)