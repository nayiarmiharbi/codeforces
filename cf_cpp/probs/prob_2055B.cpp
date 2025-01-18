#include <bits/stdc++.h>
using namespace std;

void solve_prob_2055B() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        int b; cin >> b;
        a[i] -= b;
    }
    sort(a.begin(), a.end());
    a[0]+a[1]<0? cout << "NO" : cout << "YES"; cout << endl;
}

void prob_2055B() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve_prob_2055B();
    }
}