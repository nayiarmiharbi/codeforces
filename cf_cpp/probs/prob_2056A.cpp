#include <bits/stdc++.h>
using namespace std;

void solve_prob_2056A() {
    int n; cin >> n;
    int m; cin >> m;
    int sum =0;
    for (size_t i = 0; i < n; i++)
    {
        int x; cin >> x;
        int y; cin >> y;
        i? sum += (x+y) : sum = sum;
    }
    cout << 4*m+2*sum << "\n";
}

void prob_2056A() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve_prob_2056A();
    }
}