#include <bits/stdc++.h>
using namespace std;

int main(){  
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long l, q;
        cin >> l >> q;

        vector<long long> lv(l), qv(q);
        for (long long i = 0; i < l; i++) cin >> lv[i];
        for (long long i = 0; i < q; i++) cin >> qv[i];

        vector<long long> sum(l);
        sum[0] = lv[0];
        for (long long i = 1; i < l; i++)
            sum[i] = sum[i - 1] + lv[i];

        vector<long long> maxh(l);
        maxh[0] = lv[0];
        for (long long i = 1; i < l; i++)
            maxh[i] = max(maxh[i - 1], lv[i]);
        
        for (auto val : qv) {
            long long cor = upper_bound(maxh.begin(), maxh.end(), val) - maxh.begin();
            cout << (cor > 0 ? sum[cor - 1] : 0) << " ";
        }
        cout << "\n";
    }
}
