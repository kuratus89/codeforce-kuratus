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
        for(long long i=0 ; i<n; i++){
            long long cn=0;
            cn+=i;
            for(long long j=i+1 ; j<n; j++)if(vec[j]>vec[i])cn++;
            ans = min(cn , ans);
        }
        cout<<ans<<endl;
    }
    
    
}