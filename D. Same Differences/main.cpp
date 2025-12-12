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
        map<long long, long long> ma;
        for(long long i=0 ; i<n; i++)ma[vec[i]-i]++;
        long long ans=0;
        for(auto val:ma){
            ans+=(val.second*(val.second-1))/2;
        }
        cout<<ans<<endl;

    }
    
    
}