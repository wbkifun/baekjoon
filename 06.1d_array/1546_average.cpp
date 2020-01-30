#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    double sum;
    scanf("%d", &n);
    vector<int> v(n);

    for (auto i=0; i<n; i++)
        scanf("%d", &v[i]);

    m = *max_element(v.begin(), v.end());

    sum = 0.;
    for (auto i=0; i<n; i++)
        sum += v[i]*1./m*100;

    cout << sum/n << endl;
        
    return 0;
}
