#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T;
    int x, y;
    int a, d, s;

    cin >> T;

    for (int t=0; t<T; ++t) {
        cin >> x >> y;
        d = y - x;
        a = int(sqrt(d));
        s = d - a*a;

        if (s == 0)
            cout << 2*a-1 << endl;
        else if (s <= a)
            cout << 2*a << endl;
        else if (s <= 2*a)
            cout << 2*a+1 << endl;
    }

    return 0;
}
