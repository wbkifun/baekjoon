#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c, cnt;
    string s;
    scanf("%d", &a);

    b = a;
    cnt = 0;

    while (true) {
        cnt++;

        if (b < 10) {
            c = b*11;
        }
        else {
            s = to_string(b);
            //cout << "s " << s << endl;
            //cout << int(s[0]) << ", " << int(s[1]) << endl;
            c = (b%10)*10 + (int(s[0])-48 + int(s[1])-48)%10;
        }

        //cout << "#" << cnt << " " << c << endl;

        if (c == a) break;
        else b = c;
    }
    cout << cnt << endl;

    return 0;
}
