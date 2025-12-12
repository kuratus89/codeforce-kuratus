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
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n<=4){
            cout<<2<<endl;
            continue;
        }
        long long ans=2 , x=4;
        while(x<n){
            ans++;
            x = 2*(x+1);
        }
        cout<<ans<<endl;
    }
    
    
}