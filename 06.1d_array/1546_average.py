#!/usr/bin/env python

n = int(input())
scores = [int(x) for x in input().split()]

m = max(scores)
scores2 = [x/m*100 for x in scores]
avg2 = sum(scores2)/n
print(avg2)
