#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long a, b , k;cin>>a>>b>>k;
        // if((k>=a)&&(k>=b)){
        //     cout<<1<<endl;
        //     continue;
        // }
        long long gd = gcd(a,b);
        long long ans;
        if(((a/gd)<=k)&&((b/gd)<=k))ans=1;
        else ans=2;
        cout<<ans<<endl;
    }
    
    
}