#!/usr/bin/env python

import math

T = int(input())

for _ in range(T):
    H, W, N = [int(x) for x in input().split()]

    ww = math.ceil(N/H)
    hh = N%H
    print("{}{:>02d}".format(H if hh==0 else hh , ww))
