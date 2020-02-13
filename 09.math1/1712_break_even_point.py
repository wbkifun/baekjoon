#!/usr/bin/env python

A, B, C = [int(x) for x in input().split()]

if C == B or C < B:
    print(-1)
else: 
    n = int(A/(C-B) + 1)
    print(n) 
