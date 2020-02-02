#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n=10000;
    int d;
    string s;
    vector<bool> check(n+1, true);

    for (int a=1; a<=n; ++a) {
        d = a;
        for (auto c : to_string(a))
            d += int(c)-48;
        check[d] = false;

        if (check[a])
            cout << a << endl;
    }

    return 0;
}
