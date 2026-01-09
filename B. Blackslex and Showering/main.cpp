#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;
        cin >> n;
        vector<long long> vec(n);
        for(long long i = 0; i < n; i++) cin >> vec[i];
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        long long ano = 0;
        for(long long i = 1; i < n; i++){
            ano += abs(vec[i] - vec[i-1]);
        }
        long long ans = LLONG_MAX;
        ans = min(ans, ano - abs(vec[1] - vec[0]));
        for(long long i = 1; i < n - 1; i++){
            long long cur = ano- abs(vec[i] - vec[i-1]) -abs(vec[i+1] - vec[i])+abs(vec[i+1]-vec[i-1]);
            ans = min(ans, cur);
        }
        ans = min(ans, ano - abs(vec[n-1] - vec[n-2]));
        cout << ans <<endl;
    }
}