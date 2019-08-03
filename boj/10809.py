import sys

def go(string):
    bank = [-1]*26
    data = list(string)

    for i in range(0,len(string)-1):
        idx = ord(data[i]) - ord('a')
        if bank[idx] == -1:
            bank[idx] = i
        elif bank[idx] > i:
            bank[idx] = i

    return bank
    
if __name__ == "__main__":
    string = sys.stdin.readline()
    ans = go(string)
    for e in ans:
        print(e,end=' ')
