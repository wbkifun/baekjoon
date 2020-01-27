#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n=9;
    int x, idx;
    vector<int> v(n);

    for (auto i=0; i<n; ++i) {
        scanf("%d", &x);
        v[i] = x;
    }
    idx = max_element(v.begin(), v.end()) - v.begin();
    cout << v[idx] << endl;
    cout << idx+1 << endl;

    return 0;
}
