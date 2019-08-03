import sys

def run(data):
    sum = 0
    for i in range(1,data[0]+1):
        sum += data[i]

    mean = sum/data[0]
    upper = 0
    print(sum,data[0], mean,)
    for i in range(1,data[0]+1):
        if( mean < data[i]):
            upper +=1
    ans = upper / data[0] * 100
    return ans

def go(n):
    for _ in range(n):
        data = list(map(int, sys.stdin.readline().split()))
        ans = run(data)
        print('%.3f%%' % ans)

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    go(n)