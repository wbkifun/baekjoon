#include <iostream>

int main() {
    int t, a, b;
    scanf("%d", &t);
    for (auto i=1; i<=t; ++i) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a+b);
    }
    return 0;
}