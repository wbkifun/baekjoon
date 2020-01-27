#include <iostream>

int main() {
    int t, a, b;
    scanf("%d", &t);
    for (auto i=0; i<t; ++i) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}
