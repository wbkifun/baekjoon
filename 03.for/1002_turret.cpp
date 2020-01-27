#include <iostream>
#include <cmath>

int main() {
    int t;
    int x1, y1, r1, x2, y2, r2;
    double d;
    scanf("%d", &t);
    for (auto i=0; i<t; ++i) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        if (x1 == x2 && y1 == y2 && r1 == r2) {
            printf("-1\n");
        }
        else {
            d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

            if (abs(r1 - r2) < d && d < r1 + r2)
                printf("2\n");
            else if (abs(r1 - r2) > d || d > r1 + r2)
                printf("0\n");
            else
                printf("1\n");
        }
    }
    return 0;
}
