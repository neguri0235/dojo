import sys

def run(n):
    q = []
    for _ in range(n):
        data = list(map(str,sys.stdin.readline().split()))
        if data[0] == 'push':
            q.append(int(data[1]))
        if data[0] == 'front':
            if len(q):
                print(q[0])
            else:
                print(-1)
        if data[0] == 'empty':
            if len(q):
                print(0)
            else:
                print(1)
        if data[0] == 'size':
            print(len(q))
        if data[0] == 'back':
            if len(q):
                print(q[-1])
            else:
                print(-1)
        if data[0] == 'pop':
            if len(q):
                print(q[0])
                del q[0]
            else:
                print(-1)


if __name__ == "__main__":
    n = int(input())
    run(n)