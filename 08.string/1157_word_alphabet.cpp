#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class CntAbc {
    public:
        char c;
        int cnt;
        CntAbc(char c, int cnt):c(c),cnt(cnt){}
};

bool compare(CntAbc a, CntAbc b) {
    return a.cnt > b.cnt;
}

int main() {
    string s;
    cin >> s;
    vector<CntAbc> v;

    // '0':48, 'A'~'Z':65~90, 'a'~'z':97~122
    for (int i=97; i<=122; ++i)
        v.push_back(CntAbc(char(i),0));

    //for (auto x : v) cout << x.c << x.cnt << " ";
    //cout << endl;

    for (auto c : s) {
        if (isupper(c))
            v[int(c) - 65].cnt++;
        else
            v[int(c) - 97].cnt++;
    }

    //for (auto x : v) cout << x.c << x.cnt << " ";
    //cout << endl;

    sort(v.begin(), v.end(), compare);

    //for (auto x : v) cout << x.c << x.cnt << " ";
    //cout << endl;

    if (v[0].cnt == v[1].cnt)
        cout << "?" << endl;
    else
        cout << char(toupper(v[0].c)) << endl;

    return 0;
}
