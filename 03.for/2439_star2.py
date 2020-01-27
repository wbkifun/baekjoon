#!/usr/bin/env python

n = int(input())
for i in range(1,n+1):
    star = ''.join(['*' for _ in range(i)])
    print("{1:>{0}}".format(n, star))

