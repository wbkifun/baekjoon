#!/usr/bin/env python

s = input()
abc = "abcdefghijklmnopqrstuvwxyz"
cnt = [[c, 0] for c in abc]

for i, c in enumerate(abc):
    cnt[i][-1] += s.lower().count(c)

cnt2 = sorted(cnt, key=lambda x: x[-1], reverse=True)

if (cnt2[0][-1] == cnt2[1][-1]):
    print('?')
else:
    print(cnt2[0][0].upper())
