#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //editorial used
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        long long ans=0,mi=0;
        for(long long i=0 ; i<n; i++){
            mi= min(mi+1,vec[i]);
            ans+=mi;
        } 
        cout<<ans<<endl;      
    }
    
    
}