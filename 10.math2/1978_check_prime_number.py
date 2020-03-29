#!/usr/bin/env python


def check_prime_number(a):
    #print("\n{}".format(a))

    if a == 1: return False

    for i in range(2, a):
        #print(i)
        if (a//i)*i == a:
            return False

    return True


if __name__ == "__main__":
    n = int(input())
    nums = [int(i) for i in input().split()]
    cnt = 0

    for num in nums:
        if check_prime_number(num):
            cnt += 1

    print(cnt)
