import sys

def bin_search(data,target,n):
    start = 0
    end = n -1
    while start <= end:

        mid = (start + end) // 2
        if data[mid] == target:
            return mid
        elif data[mid] < target:
            start = mid+1
        else:
            end = mid-1
    return -1



def worker():
    N = int(input())
    data = list(map(int, sys.stdin.readline().split()))
    data = sorted(data)
    _ = int(input())
    check = list(map(int, sys.stdin.readline().split()))

    for val in check:
#        print("check value :", val)
        if bin_search(data,val,N) != -1:
            print(1,end=' ')
        else:
            print(0,end=' ')

if __name__ == "__main__":
    worker()
