#include <bits/stdc++.h>
using namespace std;

void solve_prob_1A() {
    int n, m;
    cin >> n >> m;
    int minDim = max(n, m);
    int result = 1 + minDim;
    cout << result << endl;
}

void prob_1A() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve_prob_1A();
    }
}