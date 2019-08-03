tc = int(input())



zero = [0] * 42
one = [0] * 42

zero[0] = 1
zero[1] = 0
one[0] = 0
one[1] = 1

for i in range(2,41):
    zero[i] = zero[i-2] + zero[i-1]
    one[i] = one[i-2] + one[i-1]

for _ in range(tc):
    n = int(input())
    print(zero[n],one[n])