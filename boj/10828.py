import sys

def go(n):

    stack = []

    for i in range(0,n):
        data = list(map(str,sys.stdin.readline().split()))

        if data[0] == 'push':
            stack.append(data[1])
        if data[0] == 'size':
            print(len(stack))
        if data[0] == 'empty':
            if len(stack) == 0:
                print('1')
            else:
                print('0')
        if data[0] == 'top':
            if len(stack) == 0:
                print('-1')
            else:
                print(stack[-1])
        if data[0] == 'pop':
            if len(stack) == 0:
                print('-1')
            else:
                print(stack[-1])
                stack.pop()

if __name__ == "__main__":
    n = int(input())
    go(n)