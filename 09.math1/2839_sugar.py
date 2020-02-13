#!/usr/bin/env python

N = int(input())

max_x = int(N/5)
max_y = int(N/3)

xpy = []
for x in range(0, max_x+1):
    for y in range(0, max_y+1):
        if 5*x + 3*y == N:
            xpy.append(x+y)

if len(xpy) == 0:
    print(-1)
else:
    print(min(xpy))
