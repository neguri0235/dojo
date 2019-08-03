

def go(sum):

    for i in range(0,5):
        score = int(input())
        if score < 40:
            score = 40
        sum += score
    return sum//5

if __name__ == "__main__":
    sum = 0
    mean = go(sum)
    print(mean)