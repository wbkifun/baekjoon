#!/usr/bin/env python


def climb1(A, B, V):
    h = 0
    day = 0
    while True:
        day += 1
        h += A
        if h >= V:
            return day
        h -= B


def climb2(A, B, V):
    import math
    return math.ceil((V-A)/(A-B) + 1)


def generate():
    import random
    B = random.randint(1, 1000000000)
    A = random.randint(B+1, 1000000000)
    V = random.randint(A, 1000000000)

    return A, B, V


if __name__ == "__main__":
    A, B, V = [int(x) for x in input().split()]
    print(climb2(A, B, V))

    '''
    day1 = climb1(A, B, V)
    day2 = climb2(A, B, V)
    print("day={}, {}".format(day1, day2))
    '''

    '''
    while True:
        A, B, V = generate()

        day1 = climb1(A, B, V)
        day2 = climb2(A, B, V)

        print("A={}, B={}, V={}, day={}, {}".format(A, B, V, day1, day2))
        if day1 != day2:
            break
    '''
