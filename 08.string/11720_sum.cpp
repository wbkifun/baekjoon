#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, tot;
    string s;
    scanf("%d", &n);
    cin >> s;

    tot = 0;
    for (auto c : s)
        tot += int(c)-48;
    cout << tot << endl;

    return 0;
}
