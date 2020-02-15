#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T;
    int H, W, N;
    int hh, ww;

    cin >> T;

    for (int t=0; t<T; ++t) {
        cin >> H >> W >> N;
        ww = ceil(double(N)/H);
        hh = N%H;
        printf("%d%02d\n", hh==0 ? H : hh, ww);
    }

    return 0;
}
