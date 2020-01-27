#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    scanf("%d", &n);
    vector<int> v(n);

    for (auto i=0; i<n; ++i) {
        scanf("%d", &x);
        v[i] = x;
    }
    sort(v.begin(), v.end());

    cout << v[0] << " " << v[n-1] << endl;

    return 0;
}
