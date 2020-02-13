#!/usr/bin/env python

n = int(input())

cnt = 1
stop = False

for i in range(1,n+1):
    for k in range(1,i+1):
        if cnt == n:
            if i%2 == 0:
                print("{}/{}".format(k, i-k+1))
            else
                print("{}/{}".format(i-k+1, k))
            stop = True
            break
        cnt += 1
    if stop: break
