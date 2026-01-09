#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;
        long long ans=0;
        for(long long i=1 ; i<=(1e9); i*=k){
            long long x = ((l2+i-1)/i);
            long long y = r2/i;
            x = max(x , l1);
            y = min(y , r1)+1;
            ans += max(0LL , y-x);
        }
        cout<<ans<<endl;
    }
    
    
}