#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n%2 == 0)
        cout << (n+1)*(n/2) << endl;
    else
        cout << n*(n/2)+n << endl;
    return 0;
}
