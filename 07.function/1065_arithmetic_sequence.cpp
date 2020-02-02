#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, d;
    int cnt=0;
    bool check;
    string s;
    scanf("%d", &n);

    for (int a=1; a<=n; ++a) {
        if (a < 100)
            cnt++;
        else {
            s = to_string(a);
            d = int(s[0]) - int(s[1]);
            check = true;
            for (int i=1; i<s.size()-1; ++i) {
                if (d != int(s[i]) - int(s[i+1])) {
                    check = false;
                    break;
                }
            }
            if (check) cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
