#!/usr/bin/env python

s = input()
a, b = [int(x[::-1]) for x in s.split()]
print(max(a, b))
