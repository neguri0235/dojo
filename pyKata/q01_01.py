
def run(num : int) -> int :
    """
    11 부터 시작해서 팰린드롬을 구한다.
    """
    num = 11
    while True:
        num_10 = str(num)
        num_8 = oct(num).replace("0o","")
        num_2 = bin(num).replace("0b","")

        if num_10 == num_10[::-1] \
            and num_8 == num_8[::-1] \
            and num_2 == num_2[::-1]:
            print(num)
            break
        num += 2
    return 0

if __name__ == "__main__":
    init  = 11
    run(init)