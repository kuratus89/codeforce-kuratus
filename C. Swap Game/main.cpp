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
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        long long ans=LLONG_MAX;
        for(long long i=0 ; i<n ;i++)ans = min(ans , vec[i]);
        if(vec[0]==ans)cout<<"Bob";
        else cout<<"Alice";
        cout<<endl;
        
    }
    
    
}