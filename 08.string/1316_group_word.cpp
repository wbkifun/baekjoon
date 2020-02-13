#include <iostream>
#include <string>
#include <map>

using namespace std;


int check_group_word(string s) {
    map<char, bool> d;  // STL dictionary, bool: end=>true
    char prev_c=' ';

    for (auto c : s) {
        if (d.count(c) > 0) {
            // d.find(c)->first: key, d.find(c)->second: value
            if (d.find(c)->second)
                return 0;
        }
        else {
            if (prev_c != ' ');
                d.find(prev_c)->second = true;
                
            d.insert(make_pair(c,false));
            prev_c = c;
        }
    }

    return 1;
}


int main() {
    int n;
    int cnt=0;
    string s;

    cin >> n;
    for (int t=0; t<n; ++t) {
        cin >> s;
        cnt += check_group_word(s);
    }

    cout << cnt << endl;
    
    return 0;
}
