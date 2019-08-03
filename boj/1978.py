import sys

prime = [1]*1001

def make_prime():
    prime[1] = 0
    prime[1000] = 0

    for i in range(2,500):
        for j in range(2,1001):
            n = j*i
            if n >=1000:
                break
            prime[n] = 0 

if __name__ == "__main__":
    ans = 0
    make_prime()

    n = int(input())
    data = list(map(int, sys.stdin.readline().split()))
    for i in data:
        if prime[i]:
            ans += 1
    print(ans)