
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
        return x+n
    return add


class Adder:
    def __init__(self, n):
        self.n = n
    def __call__(self, x):
        return self.n + x


if __name__ == "__main__":
    print(greet())
    print(greetu())
    print(speak('Hello World!'))
    #print(speak.whisper)
    print(get_speak_func(0.3)('Hello World'))
    print(get_speak_func(0.7)('Hello World'))
    print(get_speak_func2('Hello World', 0.7)())
    plus_3 = make_adder(3)
    plus_5 = make_adder(5)
    print(plus_3(3))
    print(plus_5(3))
    plus_3 = Adder(3)
    print(plus_3(3))
