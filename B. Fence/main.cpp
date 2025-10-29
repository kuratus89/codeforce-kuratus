#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    int n ; int k;
    cin >> n >> k;
    vector<ll> vec(n);
    for(int i = 0; i < n; i++)cin >> vec[i];
    // vector<ll> v(n-k+1);
    for(int i=1; i<n ; i++) vec[i]+=vec[i-1];
    // for(int i = 0; i <= n-k; i++) {
    //     for(int j = i; j < i+k; j++) {
    //         v[i] += vec[j];
    //     }
    // }
    ll ans =vec[k-1] ;
    ll value =0;
    for(int i = 1; i <= n-k; i++) {
        if((vec[i+k-1]-vec[i-1])< ans) {
            ans = vec[i+k-1]-vec[i-1];
            value = i;
        }
    }
    cout << value + 1 << endl;
    return 0;


}