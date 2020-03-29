#include<iostream>

using namespace std;


bool check_prime_number(int a) {
    //cout << "\n" << a << endl;

    if (a == 1)
        return false;

    for (int i=2; i<a; ++i) {
        //cout << i << endl;
        if ((a/i)*i == a)
            return false;
    }

    return true;
}


int main() {
    int n, a;
    int cnt;

    cnt = 0;
    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> a;
        if (check_prime_number(a))
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
