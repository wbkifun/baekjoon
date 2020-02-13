#!/usr/bin/env python

def check_group_word(s):
    group = {}
    prev_c = ''

    for c in s:
        if c in group:
            if group[c] == 'end':
                return 0

        else:
            if prev_c != '':
                group[prev_c] = 'end'

            group[c] = 'start'
            prev_c = c
        
    return 1


if __name__ == "__main__":
    n = int(input())
    cnt = 0

    for _ in range(n):
        s = input()
        cnt += check_group_word(s)

    print(cnt)
