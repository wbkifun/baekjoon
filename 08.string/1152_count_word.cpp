#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int cnt;
    bool prev;  // true if previous character is alphabet

    getline(cin, s);
    cnt = 0;
    prev = false;

    for (auto c : s) {
        //cout << c << ' ' << cnt << ' ' << prev << endl;

        if (prev) {
            if (c == ' ') {
                cnt++;
                prev = false;
                //cout << "  1) " << cnt << ' ' << prev << endl;
            }
        }
        else {
            if (c != ' ') {
                prev = true;
                //cout << "  2) " << cnt << ' ' << prev << endl;
            }
        }
    }

    if (prev) cnt++;
    cout << cnt << endl;

    return 0;
}
