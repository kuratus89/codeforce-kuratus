#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        long long ans=1;
        while(k--){
            ans = (ans*n)%((long long)1e9+7);
        }
        cout<<ans<<endl;
    }
    
}