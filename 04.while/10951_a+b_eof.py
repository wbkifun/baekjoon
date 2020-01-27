#!/usr/bin/env python

while True:
    try:
        line = input()
        a, b = [int(x) for x in line.split()]
        print(a+b)
    except EOFError:
        break
