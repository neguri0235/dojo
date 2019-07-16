import sys

def calc(ok):
    return ok*(ok+1)//2

def go(n):
    for _ in range(n):
        data = list(map(str, sys.stdin.readline()))
        
        ok = 0
        sum = 0

        for e in data:
            if e == 'O':
                ok += 1
            else:
                sum += calc(ok)
                ok = 0
        print(sum)

if __name__ == "__main__":
    n = int(input())
    go(n)