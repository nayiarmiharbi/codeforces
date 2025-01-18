#include <bits/stdc++.h>
using namespace std;

void solve_prob_118A() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i') {
            continue;
        }
        cout << "." << s[i];
    }
    cout << endl;
}

void prob_118A() {
    int t = 1;
    // cin >> t;
    while (t--) {
        solve_prob_118A();
    }
}