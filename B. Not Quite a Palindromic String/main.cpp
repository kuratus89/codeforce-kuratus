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
        string s;cin>>s;
        long long z=0,o=0;
        for(auto val:s){
            if(val=='1')o++;
            else z++;
        }
        bool ans=1;
        long long le = n-(2*k);
        le/=2;
        if(min(o,z)<le)ans=0;
        long long lo = min(min(o,z) , le);
        o-=lo;
        z-=lo;
        if(((o/2)+(z/2))<k)ans=0;
        
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;

    }
    
    
}