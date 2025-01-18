#include <bits/stdc++.h>
using namespace std;

void solve_prob_2055A() {
    int n; cin >> n;
    int a; cin >> a;
    int b; cin >> b;
    (a-b)%2? cout << "NO" : cout << "YES"; cout << endl;
}

void prob_2055A() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve_prob_2055A();
    }
}