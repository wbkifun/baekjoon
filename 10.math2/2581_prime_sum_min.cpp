#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


bool check_prime_number(int a) {
    if (a == 1)
        return false;

    for (int i=2; i<a; i++) {
        if ((a/i)*i == a)
            return false;
    }

    return true;
}


int main() {
    int m, n;
    vector<int> v;

    cin >> m;
    cin >> n;

    for (int a=m; a<=n; a++) {
        if (check_prime_number(a))
            v.push_back(a);
    }

    if (v.size() == 0) {
        cout << "-1" << endl;
    }
    else {
        cout << accumulate(v.begin(), v.end(), 0) << endl;
        cout << v[0] << endl;
    }

    return 0;
}
