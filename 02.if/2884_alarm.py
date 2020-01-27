#!/usr/bin/env python

hh, mm = input().split()
h, m = int(hh), int(mm)
m2 = m - 45
if m2 < 0:
    h2 = h - 1
    m2 += 60
    if h2 < 0:
	    h2 += 24
else:
    h2 = h
print("{} {}".format(h2, m2))
