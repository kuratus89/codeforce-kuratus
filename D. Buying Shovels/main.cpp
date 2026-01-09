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
        long long i=1;
        long long ans =-1;
        long long bans=-1;
        while(((i*i<=n))&&(i<=k)){
            if(n%i==0){
                bans=n/i;
                if((n/i)<=k){
                    ans =i;
                    break;
                }
            }
            i++;
        }
        if(ans!=-1)cout<<ans<<endl;
        else cout<<bans<<endl;
    }
    
    
}