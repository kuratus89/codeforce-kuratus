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
        map<long long , long long> ma;
        long long ans=0;
        for(long long i=0 ;i<n; i++){
            for(long long j=i+1 ; j<n; j++){
                ma[vec[i]+vec[j]]++;
            }
        }
        for(auto val:ma)ans=max(ans , val.second);
        cout<<ans<<endl;
    }
    
    
}