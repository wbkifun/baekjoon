#!/usr/bin/env python

aa, bb, cc = input().split()
a, b, c = int(aa), int(bb), int(cc)
print((a + b)%c)
print((a%c + b%c)%c)
print((a * b)%c)
print((a%c * b%c)%c)
