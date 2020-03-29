#!/usr/bin/env python


def check_prime_number(a):
    if a == 1: return False

    for i in range(2, a):
        if (a//i)*i == a:
            return False

    return True


if __name__ == "__main__":
    m = int(input())
    n = int(input())

    primes = []
    for a in range(m, n+1):
        if check_prime_number(a):
            primes.append(a)

    if len(primes) == 0:
        print(-1)
    else:
        print(sum(primes))
        print(primes[0])
