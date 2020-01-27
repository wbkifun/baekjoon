#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (auto i=1; i<=n; ++i) {
        string star;
        for (auto k=0; k<i; ++k)
            star.push_back('*');
        cout << star << endl;
    }
    return 0;
}
