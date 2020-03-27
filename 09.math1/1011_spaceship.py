#!/usr/bin/env python
from math import sqrt

T = int(input())

for _ in range(T):
    x, y = [int(x) for x in input().split()]
    d = y-x
    a = int(sqrt(d))
    s = d - a*a

    if s == 0:
        print(2*a-1)
    elif s <= a:
        print(2*a)
    elif s <= 2*a:
        print(2*a+1)
