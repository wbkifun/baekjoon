#!/usr/bin/env python

n = int(input())

for _ in range(n):
    ox = input()

    cnt = 0
    ss = 0
    for c in ox:
        if c == 'X':
            cnt = 0
        elif c == 'O':
            cnt += 1
            ss += cnt

    print(ss)
