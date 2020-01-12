import sys


def worker(s):
    stack = []

    for i in range(len(s)):
#        print(s[i], end = ' ')
        if s[i] == '[':
            stack.append('[')
        elif s[i] == '(':
            stack.append('(')
        elif s[i] == ']':
            if len(stack) == 0:
                return 'no'
            r = stack[-1]
            if r == '[':
                del stack[-1]
            else:
                return 'no'

        elif s[i] == ')':
            if len(stack) == 0:
                return 'no'
            r = stack[-1]

            if r == '(':
                del stack[-1]
            else:
                return 'no'
        

    if len(stack):
        return 'no'
    else:
        return 'yes'

if __name__ == "__main__":
    
    while True:
        s = input()
        if len(s) == 1 and s == '.':
            break
        r = worker(s)
        print(r)
        