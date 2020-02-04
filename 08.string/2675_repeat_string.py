#!/usr/bin/env python

t = int(input())

for _ in range(t):
    nn, s = input().split()
    n = int(nn)

    for c in s:
        print(c*n, end='')

    print()
