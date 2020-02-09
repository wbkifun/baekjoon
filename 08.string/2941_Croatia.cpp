#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, sub;
    int i, cnt;

    cin >> s;

    i = 0;
    cnt = 0;
    while (true) {
        sub = s.substr(i,2);

        if (s.substr(i,3) == "dz=") {
            cnt++;
            i += 3;
        }
        else if (sub=="c=" || sub=="c-" || sub=="d-" || sub=="lj" || sub=="nj" || sub=="s=" || sub=="z=") {
            cnt++;
            i += 2;
        }
        else {
            cnt++;
            i += 1;
        }

        if (i >= s.size())
            break;
    }

    cout << cnt << endl;

    return 0;
}
