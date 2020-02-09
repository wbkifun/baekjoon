#!/usr/bin/env python

s = input()

croatia = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

i = 0
cnt = 0
while True:
    if s[i:i+3] == 'dz=':
        cnt += 1
        i += 3
    elif s[i:i+2] in croatia:
        cnt += 1
        i += 2
    else:
        cnt += 1
        i += 1

    if i >= len(s):
        break

print(cnt)
