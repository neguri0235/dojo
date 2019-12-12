import sys



def worker():
    bucket = [0] * 10000001
    n = int(input())
    for _ in range (n):
        a = int(input())
        bucket[a] += 1
    
    for i in range(10000001):
        if bucket[i]:
            for j in range(bucket[i]):
                print(i)

def worker2():
    bucket = dict()
    n = int(input())

    for _ in range(n):
        a = int(sys.stdin.readline())
        if a in bucket:
            bucket[a] += 1
        else:
            bucket[a] = 1
#    print('-----')
    bucket = sorted(bucket.items())
#    print(type(bucket))
    for key, val in bucket:
#        print('d ',key,val)
        for _ in range(val):
            print(key)



if __name__ == "__main__":
    worker2()
