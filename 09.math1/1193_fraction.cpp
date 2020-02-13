#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt;

    cin >> n;
    cnt = 1;
    for (int i=1; i<=n; ++i) {
        for (int k=1; k<=i; ++k) {
            if (cnt == n) {
                if (i%2 == 0)
                    cout << k << "/" << i-k+1 << endl;
                else
                    cout << i-k+1 << "/" << k << endl;
                return 0;
            }
            cnt++;
        }
    }
}
