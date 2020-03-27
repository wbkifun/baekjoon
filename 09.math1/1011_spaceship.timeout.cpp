#include <iostream>

using namespace std;

int main() {
    int T;
    int x, y;
    int a, b, d, cnt;

    cin >> T;

    for (int t=0; t<T; ++t) {
        cin >> x >> y;

        if (y-x == 1)
            cout << '1' << endl;
        else {
            a = 1;
            d = y-x-2;
            cnt = 2;
            while (true) {
                if (d > 3*(a+1)) {
                    d -= 2*(a+1);
                    cnt += 2;
                    a += 1;
                    continue;
                }

                if (a-1 <= d && d <= a+1) {
                    cnt += 1;
                    break;
                }
                else if (2*(a-1) <= d && d <= 2*(a+1)) {
                    cnt += 2;
                    break;
                }
                else if (3*(a-1) <= d && d <= 3*(a+1)) {
                    cnt += 3;
                    break;
                }
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
