#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int v[10] = {0};
    scanf("%d\n%d\n%d", &a, &b, &c);

    for (auto x : to_string(a*b*c)) {
        //cout << x << " " << int(x)-48 << endl;
        v[int(x)-48] += 1;
    }

    for (auto x : v)
        cout << x << endl;

    return 0;
}
