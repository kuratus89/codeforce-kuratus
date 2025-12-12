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
        long long ans=-1;
        long long r = sqrt(n);
        if((r*r)==n)ans=r;
        if(ans==-1)cout<<-1;
        else cout<<ans<<" "<<0;
        cout<<endl;
        
    }
    
    
}