#!/usr/bin/env python

import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    a, b = input().split()
    print(int(a)+int(b))
