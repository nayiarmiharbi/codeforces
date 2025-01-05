#include <bits/stdc++.h>
using namespace std;

void solve_prob_2057B() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        unordered_map<int, int> frequencyMap;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            frequencyMap[arr[i]]++;
        }
        vector<int> freqList;
        for (const auto& pair : frequencyMap) {
            freqList.push_back(pair.second);
        }
        sort(freqList.begin(), freqList.end());
        int uniqueCount = freqList.size();
        for (int freq : freqList) {
            if (k >= freq) {
                k -= freq;
                uniqueCount--;
            } else {
                break;
            }
        }
        if (uniqueCount == 0) {
            uniqueCount = 1;
        }

        cout << uniqueCount << endl;
    }
}
