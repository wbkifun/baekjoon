#!/usr/bin/env python

target = int(input())
cnt = 1
path = 1
while True:
    if target <= cnt:
        print(path)
        break
    cnt += path*6
    path += 1
