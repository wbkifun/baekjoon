#include <iostream>

using namespace std;

int main() {
    int target, cnt, path;

    cin >> target;
    cnt = 1;
    path = 1;
    while (true) {
        if (target <= cnt) {
            cout << path << endl;
            break;
        }
        cnt += path*6;
        path++;
    }

    return 0;
}
