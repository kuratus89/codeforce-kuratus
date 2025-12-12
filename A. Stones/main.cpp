#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long a,b,c;cin>>a>>b>>c;
        long long ans=0;
        long long o = min(b, c / 2);
        b-=o;
        long long x= min(a , b/2);

        cout<<3*(o+x)<<endl;
        
    }
    
    
}