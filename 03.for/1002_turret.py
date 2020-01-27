#!/usr/bin/env python

import math
import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    x1, y1, r1, x2, y2, r2 = [int(x) for x in input().split()]
    if x1 == x2 and y1 == y2 and r1 == r2:
        print(-1)
    else:
        d = math.sqrt((x2-x1)**2 + (y2-y1)**2)

        if abs(r1 - r2) < d < r1 + r2:
            print(2)
        elif abs(r1 - r2) > d or d > r1 + r2:
            print(0)
        else:
            print(1)
