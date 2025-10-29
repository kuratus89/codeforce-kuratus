#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<pair<ll,ll>> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    vector<ll> ans(s.size());
    if(s[0] == 'a') ans[0] = 1;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == 'a') {
            ans[i]=ans[i-1] + 1;
        } else ans[i]= ans[i-1];
    }
    for(auto val:v){
        if(val.first== 1) cout<< ans[val.second-1] << endl;
        else cout << ans[val.second-1] - ans[val.first-2] << endl;
    }
}