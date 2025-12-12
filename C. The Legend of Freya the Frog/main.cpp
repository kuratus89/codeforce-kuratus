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
        long long x;
        if(a%k==0) x = a/k;
        else x = (a+(k -(a%k)))/k;
        long long y;
        if(b%k==0) y = b/k;
        else y = (b+(k -(b%k)))/k;
        long long ans=2*(max(x,y));
        if(x>y)ans--;
        // cout<<x<<" "<<y<<" ";
        cout<<ans<<endl;
    }
    
    
}