#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    string sa, sb;

    cin >> a >> b;
    sa = to_string(a);
    sb = to_string(b);
    reverse(sa.begin(), sa.end());
    reverse(sb.begin(), sb.end());

    a = stoi(sa);
    b = stoi(sb);
    if (a < b)
        cout << b << endl;
    else
        cout << a << endl;

    return 0;
}
