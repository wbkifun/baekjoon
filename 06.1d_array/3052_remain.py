#!/usr/bin/env python

n = 42
remain = [0]*n

for _ in range(10):
    x = int(input())
    remain[x%n] += 1 

print(n - remain.count(0))
