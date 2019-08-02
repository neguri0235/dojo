import sys

def check(data):

    stack = []

    for e in data:
        if e == '(':
            stack.append('(')
        else:
            if len(stack) == 0:
                return 'NO'
            stack.pop()

    if len(stack) == 0:
        return 'YES'
    else:
        return 'NO'

def go(n):
    for _ in range(n):
        data = list(sys.stdin.readline().rstrip())
        if len(data)%2:
            print('NO')
        else:
            print(check(data))

if __name__ == "__main__":
    n = int(input())
    go(n)