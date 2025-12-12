#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    long long tt;
    cin >> tt;

    while (tt--) {
        long long n;
        cin >> n;

        vector<long long> seq;
        long long low = 1, high = n * n;

        while (low <= high) {
            seq.push_back(low++);
            if (low <= high) seq.push_back(high--);
        }

        vector<vector<long long>> ans(n, vector<long long>(n));

        long long idx = 0;
        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < n; j++) {
                ans[i][j] = seq[idx++];
            }
        }

        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < n; j++) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
}
