#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int cnt, sum;
    string s;

    cin >> n;

    for (auto i=0; i<n; ++i) {
        cin >> s;

        cnt = 0;
        sum = 0;
        for (auto c : s) {
            if (c == 'X') {
                cnt = 0;
            }
            else if (c == 'O') {
                cnt++;
                sum += cnt;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
