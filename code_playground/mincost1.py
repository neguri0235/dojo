data = [[0, 10, 75, 94],
        [-1, 0, 35, 50],
        [-1, -1, 0, 80],
        [-1, -1, -1, 0]]


def minCost(s, d):

    if s == d or s == d-1:
        return data[s][d]

    min_cost = data[s][d]

    for i in range(s+1, d):
        temp = minCost(s, i) + minCost(i, d)
        if temp < min_cost:
            min_cost = temp
    return min_cost


def main():
    r = minCost(0, 2)
    print(r)


if __name__ == "__main__":
    main()