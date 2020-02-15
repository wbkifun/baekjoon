#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B, V;
    int day;

    cin >> A >> B >> V;

    day = ceil((V-A)/(A-B) + 1);

    cout << day << endl;

    return 0;
}

/*
965065695 949225777 985031745
3
*/
