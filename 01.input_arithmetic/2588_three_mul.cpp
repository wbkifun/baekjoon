#include <iostream>

using namespace std;

int main() {
    int a, b;
	int b1, b2, b3;
	cin >> a;
	cin >> b;

    b1 = b/100;
	b2 = (b - b1*100)/10;
	b3 = b - b1*100 - b2*10;
	//cout << b1 << ", " << b2 << ", " << b3 << endl;
	cout << a*b3 << endl;
	cout << a*b2 << endl;
	cout << a*b1 << endl;
	cout << a*b << endl;

    return 0;
}
