#!/usr/bin/env python

n = 10000
check = [True for _ in range(n+1)]

for a in range(1,n+1):
    d = a + sum([int(c) for c in str(a)])
    if d <= n:
        check[d] = False

    if check[a]:
        print(a)
