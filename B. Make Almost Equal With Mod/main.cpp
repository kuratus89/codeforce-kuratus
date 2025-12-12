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
        vector<long long > vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        long long ans=0;
        for(long long i=1 ; i<=60 ; i++){
            set<long long> se;
            for(long long j=0 ;j<n; j++)se.insert(vec[j]%(1LL<<i));
            if(se.size()==2){
                ans=1LL<<i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    
    
}