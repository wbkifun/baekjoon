#!/usr/bin/env python

T = int(input())

for _ in range(T):
    k = int(input())
    n = int(input())

    # numpy array를 써야한다. 그런데 기본 패키지만을 써야하는 제약이 있다.
    a = [i for i in range(1,n+1)]
    b = [1]*n
    
    for i in range(1,k+1):
        for j in range(1,n):
            b[j] = b[j-1] + a[j]

        a = b[:]

    print(b[-1])
