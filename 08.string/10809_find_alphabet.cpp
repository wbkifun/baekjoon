#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string abc="abcdefghijklmnopqrstuvwxyz";
    cin >> s;

    for (auto c : abc) {
        auto found = s.find(c);
        if (found == string::npos)
            cout << "-1 ";
        else
            cout << found << " ";

    }
    cout << endl;

    return 0;
}
