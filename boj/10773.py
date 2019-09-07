import sys
stack = list()
n = int(sys.stdin.readline())
#print(n)

for _ in range(n):
    a = int(sys.stdin.readline())
    if a == 0:
        stack.pop()
    else:
        stack.append(a)
print(sum(stack))