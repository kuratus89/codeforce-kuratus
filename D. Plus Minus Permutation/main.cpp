#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,a,b;cin>>n>>a>>b;
        long long x= n/a , y = n/b , both = n/(lcm(a,b));
        x-=both ;
        y-=both;
        y = min(y , n-x);
        long long ans=0;
        ans+=(x*(2*n - x+1))/2;;
        ans-=(y*(y+1))/2; 
        cout<<ans<<endl;
    }
    
    
}