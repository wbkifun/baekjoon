#include <iostream>

using namespace std;

int main() {
    int n, x, a;
    scanf("%d %d", &n, &x);
    for (auto i=0; i<n; i++) {
        scanf("%d", &a);
        if (a < x)
            cout << a << ' ';
    }
    cout << endl;
    return 0;
}
