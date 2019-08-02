

def go(n):

    if n < 100:
        print(n)
        return
    
    sum = 99

    for i in range(100, (n+1)):
        a = i//100
        b = i%100//10
        c = i%10

        if (a-b) == (b-c):
            sum += 1
    print(sum)

if __name__ == "__main__":
    n = int(input())
    go(n)
