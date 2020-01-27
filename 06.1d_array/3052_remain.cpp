#include <iostream>

using namespace std;

int main() {
    int x;
    int n=42;
    int cnt=0;
    int remain[n] = {0};

    for (auto i=0; i<10; ++i) {
        scanf("%d", &x);
        remain[x%n] += 1;
    }

    for (auto i=0; i<n; ++i)
        if (remain[i] > 0) cnt++;

    cout << cnt << endl;

    return 0;
}
