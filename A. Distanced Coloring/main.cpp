#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long a,b,k;cin>>a>>b>>k;
        long long ans;
        if((a<=k)&&(b<=k))ans = a*b;
        else if((a<=k))ans = a*k;
        else if(b<=k)ans = b*k;
        else ans=k*k;
        cout<<ans<<endl;
    }
    
}