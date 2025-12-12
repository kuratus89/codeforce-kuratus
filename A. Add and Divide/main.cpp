#include <bits/stdc++.h>
using namespace std;
long long apple(long long a ,long long b){
    long long ans=0;
    while(a){
        if(a==b){
            ans++;
            b++;
        }
        a/=b;
        ans++;
    }
    return ans;

    
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long a,b;cin>>a>>b;
        long long ans=LLONG_MAX;
        bool ad=0;
        if (b==1){
            b++;
            ad=1;
        }
        for(long long i=0 ; i<40 ; i++){
            ans = min(ans , apple(a , (b+i)) +i);
        }
        if(ad)ans++;
        cout<<ans<<endl;
    }
    
}