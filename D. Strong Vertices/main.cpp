#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> a(n),b(n);
        for(long long i=0 ; i<n; i++)cin>>a[i];
        for(long long i=0 ; i<n; i++)cin>>b[i];
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)vec[i] = a[i]-b[i];
        long long ma =LLONG_MIN;
        for(auto val:vec)ma = max(ma , val);
        vector<long long> ans;
        for(long long i=0 ; i<n; i++)if(vec[i]==ma)ans.push_back(i+1);
        cout<<ans.size()<<endl;
        for(auto val:ans)cout<<val<<" ";
        cout<<endl;
    }
    
}