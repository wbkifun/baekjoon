#include <iostream>

using namespace std;

int main() {
    int h, m;
    int h2, m2;

	cin >> h >> m;
	m2 = m - 45;
	if (m2 < 0) {
	    h2 = h - 1;
		m2 = m2 + 60;
		if (h2 < 0)
		    h2 = h2 + 24;
	}
	else {
	    h2 = h;
	}

	cout << h2 << " " << m2 << endl;
	
    return 0;
}
