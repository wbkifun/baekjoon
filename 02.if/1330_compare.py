#!/usr/bin/env python

aa, bb = input().split()
a, b = int(aa), int(bb)
if (a > b):
    print('>')
elif (a < b):
    print('<')
else:
    print('==')
