#include <iostream>
#include <string>

using namespace std;

int main() {
    int tc, n;
    string s;
    cin >> tc;

    for (int t=0; t<tc; ++t) {
        cin >> n >> s;

        for (auto c : s) {
            for (int i=0; i<n; ++i)
                cout << c;
        }
        cout << endl;
    }

    return 0;
}
