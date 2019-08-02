import sys


asc = [1,2,3,4,5,6,7,8]
des = [8, 7, 6, 5, 4, 3, 2, 1]
def go():
    data = list(map(int,sys.stdin.readline().split()))

    if data == asc:
        print('ascending')
    elif data == des:
        print('descending')
    else:
        print('mixed')

if __name__ == "__main__":
    go()