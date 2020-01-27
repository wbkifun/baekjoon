#!/usr/bin/env python

n = int(input())

nums = [int(x) for x in input().split()]
s_nums = sorted(nums)
print("{} {}".format(s_nums[0], s_nums[-1]))
