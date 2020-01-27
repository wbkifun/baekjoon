#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (auto i=1; i<=n; ++i) {
        string star;
        for (auto k=1; k<=i; k++)
            star.push_back('*');
        cout.width(n);
        cout << right << star << endl;
    }
    return 0;
}
