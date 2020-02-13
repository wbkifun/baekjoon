#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    int max_x, max_y;
    vector<int> v;

    cin >> N;
    max_x = int(N/5);
    max_y = int(N/3);

    for (int i=0; i<=max_x; ++i) {
        for (int j=0; j<=max_y; ++j) {
            if (i*5 + j*3 == N)
                v.push_back(i+j);
        }
    }

    if (v.size() == 0)
        cout << -1 << endl;
    else {
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }

    return 0;
}
