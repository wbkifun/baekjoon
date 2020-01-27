#!/usr/bin/env python

n = input()
a = n[:]
cnt = 1

while True:
    if len(a) == 1:
        a = '0'+a

    b = a[-1] + str(int(a[0]) + int(a[1]))[-1]
    print(b)

    if (int(b) == int(n)):
        break
    else:
        a = b[:]
        cnt += 1

print(cnt)
