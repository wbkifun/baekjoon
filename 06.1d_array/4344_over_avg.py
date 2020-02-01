#!/usr/bin/env python

n = int(input())

for _ in range(n):
    xx = [int(x) for x in input().split()]
    num = xx[0]
    scores = xx[1:]
    avg = sum(scores)/num
    num_over_avg = len([x for x in scores if x > avg])
    print("{:1.3f}%".format(num_over_avg/num*100))
