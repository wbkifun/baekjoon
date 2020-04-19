#include <iostream>
#define MAXSIZE 1000000

using namespace std;

int not_prime_nums[MAXSIZE+1] = {1,1,0,};

void set_prime_nums(int n) {
    for (int p=2; p<=n; p++) {
        if (not_prime_nums[p] == 0) {
            for (int i=2; p*i<=n; i++) {
                not_prime_nums[p*i] = 1;
            }
        }
    }
}


int main() {
    int m, n;

    cin >> m >> n;

    set_prime_nums(n);

    for (int i=m; i<=n; i++) {
        //cout << i << " " << not_prime_nums[i] << endl;
        if (not_prime_nums[i] == 0)
            cout << i << endl;
    }

    return 0;
}
