import sys

def go():
    data = list(map(str,sys.stdin.readline().split()))
    ntime = int(data[0])
    data = list(data[1])

    for e in data:
        for i in range(ntime):
            print(e,end='')
    print()


if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        go()