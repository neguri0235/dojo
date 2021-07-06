
def uppercase(func):
    def wrapper():
        original_result = func()
        modified_result = original_result.upper()
        return modified_result
    return wrapper


def greet():
    return 'Hello'

@uppercase
def greetu():
    return 'Hello'

if __name__ == "__main__":
    print(greet())
    print(greetu())