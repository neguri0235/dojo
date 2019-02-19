def calculator(x):
    
    def add(y):
        return x+y

    return add

if __name__ == "__main__":
    print("=== print calculation ===")
    f = calculator(10)  # x에 10 이 대입되는 것임
    print(f(5))
    print(f(10))

