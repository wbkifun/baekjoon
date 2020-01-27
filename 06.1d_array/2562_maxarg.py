#!/usr/bin/env python

n = 9
nums = []
for _ in range(n):
    nums.append(int(input()))

s_nums = sorted(nums)
max_num = s_nums[-1]
idx = nums.index(max_num)
print(max_num)
print(idx+1)
