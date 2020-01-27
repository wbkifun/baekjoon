#!/usr/bin/env python

while True:
    a, b = [int(x) for x in input().split()]
    if a == b == 0:
        break
    else:
        print(a+b)
