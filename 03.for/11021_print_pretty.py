#!/usr/bin/env python

import sys
input = sys.stdin.readline

t = int(input())
for i in range(t):
    a, b = input().split()
    print("Case #{}: {}".format(i+1, int(a)+int(b)))
