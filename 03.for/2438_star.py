#!/usr/bin/env python

import sys
input = sys.stdin.readline

n = int(input())
for i in range(n):
    star = ''.join(['*' for _ in range(i+1)])
    print(star)
