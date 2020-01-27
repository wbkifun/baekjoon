#!/usr/bin/env python

n, x = [int(a) for a in input().split()]
nums = [int(a) for a in input().split()]
for a in nums:
    if a < x:
        print(a, end=' ')
print()
