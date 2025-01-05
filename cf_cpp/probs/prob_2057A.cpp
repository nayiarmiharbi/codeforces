#include<bits/stdc++.h>

using namespace std;

void solve_prob_2057A() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, m;
        cin >> n >> m;
        int minDim = max(n, m);
        int result = 1 + minDim;
        cout << result << endl;
    }
}
