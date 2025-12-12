#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long x,y,k;cin>>x>>y>>k;
        long long nft = k*y;
        nft+=k-1;
        long long ans = ((nft+(x-2))/ (x-1));
        ans+=k;
        cout<<ans<<endl;
    }
    
    
}