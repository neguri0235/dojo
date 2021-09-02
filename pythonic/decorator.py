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


def speak(text):
    def whisper(t):
        return t.lower() + '...'

    return whisper(text)


def get_speak_func(volume):
    def whisper(text):
        return text.lower() + '...'

    def yell(text):
        return text.upper() + '!'

    if volume > 0.5:
        return yell
    else:
        return whisper


def get_speak_func2(text, volume):
    def whisper():
        return text.lower() + '...'

    def yell():
        return text.upper() + '!'

    if volume > 0.5:
        return yell
    else:
        return whisper


def make_adder(n):
    def add(x):
        return x + n

    return add


class Adder:
    def __init__(self, n):
        self.n = n

    def __call__(self, x):
        return self.n + x


def lambda_test():
    add = lambda x, y: x + y
    print(add(3, 4))


def lambda_sort():
    tuples = [(1, 'd'), (2, 'b'), (3, 'a'), (4, 'a'), (3, 'c')]
    print('before sort: ', tuples)
    sortedTuples = sorted(tuples, key=lambda x:x[0])
    print('after sort: ', sortedTuples)
    print(sorted(range(-5,6), key=lambda x: x*x))


class Car:
    def __init__(self, color, mileage):
        self.color = color
        self.mileage = mileage

    def __str__(self):
        return '__str__ for Car'

    def __repr__(self):
        return '__repr__ for Car'



if __name__ == "__main__":
    print(greet())
    print(greetu())
    print(speak('Hello World!'))
    # print(speak.whisper)
    print(get_speak_func(0.3)('Hello World'))
    print(get_speak_func(0.7)('Hello World'))
    print(get_speak_func2('Hello World', 0.7)())
    plus_3 = make_adder(3)
    plus_5 = make_adder(5)
    print(plus_3(3))
    print(plus_5(3))
    plus_3 = Adder(3)
    print(plus_3(3))
    lambda_test()
    lambda_sort()
    my_car = Car('red', 14245)
    print(my_car)
    my_car

