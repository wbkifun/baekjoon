#!/usr/bin/env python

n = input()
a = n[:]
cnt = 0

while True:
    cnt += 1;

    if len(a) == 1:
        a = '0'+a

    b = a[-1] + str(int(a[0]) + int(a[1]))[-1]
    print("#{} {}".format(cnt, b))

    if (int(b) == int(n)):
        break
    else:
        a = b[:]

print(cnt)
