#include <bits/stdc++.h>
using namespace std;

void solve_prob_2056B() {
    int n; cin >> n;
    vector<string> graph(n);
    vector<int> ans(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> graph[i];
        int count = 0;
        for (size_t j = 0; j < n; j++)
        {
            if(i < j && graph[i][j] == '0') count++;
            if(i > j && graph[i][j] == '0') count--;
        }
        ans[i + count] = i + 1;
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

void prob_2056B() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve_prob_2056B();
    }
}