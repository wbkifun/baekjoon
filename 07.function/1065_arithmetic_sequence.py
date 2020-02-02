#!/usr/bin/env python

n = int(input())
cnt = 0

for i in range(1,n+1):
    if i < 100:
        cnt += 1
    else:
        nums = [int(c) for c in str(i)]
        d = nums[0] - nums[1]
        check = True
        for k in range(1,len(nums)-1):
            if d != nums[k] - nums[k+1]:
                check = False
                break

        if check:
            cnt += 1

print(cnt)
