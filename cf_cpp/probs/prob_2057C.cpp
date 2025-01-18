#include <bits/stdc++.h>
using namespace std;

void solve_prob_2057C() {
    int l, r;
    cin >> l >> r;
    int k = __lg(l^r);
    int ans = (1 << k) | l & (-1u << k);
    cout << ans << ' ' << ans-1 << ' ' << (ans+1 <= r ? ans+1: ans-2) << endl;
}

void prob_2057C() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve_prob_2057C();
    }
}