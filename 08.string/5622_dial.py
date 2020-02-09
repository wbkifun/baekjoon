#!/usr/bin/env python

s = input()

sec = 0
for c in s:
    if c in "ABC":
        sec += 3
    elif c in "DEF":
        sec += 4
    elif c in "GHI":
        sec += 5
    elif c in "JKL":
        sec += 6
    elif c in "MNO":
        sec += 7
    elif c in "PQRS":
        sec += 8
    elif c in "TUV":
        sec += 9
    elif c in "WXYZ":
        sec += 10

print(sec)
