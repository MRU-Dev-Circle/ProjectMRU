# program to find fibonacci number at nth point in sequence


def fibonacci(number: int) -> int or str:
    if number < 1:
        return "Invalid Fibonacci index!"
    elif number == 1:
        return 0
    elif number == 2:
        return 1
    else:
        return fibonacci(number - 1) + fibonacci(number - 2)


# EXAMPLE: will return 89
print(fibonacci(12))
