#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int n, num;
    int avg, num_over_avg;
    scanf("%d", &n);

    for (auto t=0; t<n; ++t) {
        scanf("%d", &num);
        vector<int> v(num);

        for (auto i=0; i<num; ++i)
            scanf("%d", &v[i]);

        avg = accumulate(v.begin(), v.end(), 0)/num;
        num_over_avg = 0;
        for (auto i=0; i<num; ++i)
            if (v[i] > avg) num_over_avg++;

        //cout << double(num_over_avg)/num*100 << endl;
        printf("%1.3f%%\n", double(num_over_avg)/num*100);
    }

    return 0;
}
