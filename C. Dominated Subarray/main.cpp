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
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        map<long long  , long long> ma;
        long long ans=LLONG_MAX;
        for(long long i=0 ; i<n; i++){
            if(ma.count(vec[i])!=0)ans = min(i-ma[vec[i]]+1 , ans);
            ma[vec[i]]=i;
        }
        if(ans==LLONG_MAX)ans=-1;
        cout<<ans<<endl;
    }
    
    
}