#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,q;cin>>n>>q;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        vector<long long> sum = vec;
        for(long long i=1; i<n; i++)sum[i]+=sum[i-1];
        for(long long i=1 ; i<n; i++)vec[i] = max(vec[i] , vec[i-1]);
        // for(long long val:vec)cout<<val<<" ";
        while(q--){
            long long k;cin>>k;
            long long it = upper_bound(vec.begin() , vec.end() , k) - vec.begin();
            if(it==0)cout<<0<<" ";
            else cout<<sum[it-1]<<" ";
        }
        cout<<endl;
    }
    
    
}