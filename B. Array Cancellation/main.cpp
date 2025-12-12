#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    
    long long tt;cin>>tt;
    while(tt--){
        long long n; cin>>n;
        long long ans=0;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        for(long long i=0 ; i<n ; i++)ans = max((long long) 0,ans+vec[i]);
        cout<<ans<<endl;
    }
    
}