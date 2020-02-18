#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T, k, n;

    cin >> T;
    for (int t=0; t<T; ++t) {
        cin >> k;
        cin >> n;

        int a[n], b[n];
        for (int i=0; i<n; ++i)
            a[i] = i+1;
        b[0] = 1;

        for (int i=1; i<=k; ++i) {
            for (int j=1; j<n; ++j)
                b[j] = b[j-1] + a[j];

            copy_n(b, n, a); // copy b to a
        }
        cout << b[n-1] << endl;
    }

    return 0;
}
