#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    
    long long tt;cin>>tt;
    while(tt--){
        long long a,b;cin>>a>>b;
        string s;cin>>s;
        vector<long long >vec;
        long long cn=0;
        bool gruk =1;
        bool fool=1;
        for(auto val:s){
            if(val=='1')fool=0;
        }
        if(fool){
            cout<<0<<endl;
            continue;
        }
        for(auto val:s){
            if(gruk){
                if(val=='1')gruk=0;
                continue;
            }
            if(val=='1'){
                if(cn!=0)vec.push_back(cn);
                cn=0;
            }
            else cn++;
        }
        // for(auto val:vec)cout<<val<<" ";
        // cout<<endl;
        long long ans=a;
        for(auto val:vec){
            long long colo = val*b;
            // if(colo>)
            ans+=min(colo , a);
        }
        cout<<ans<<endl;
    }
    
}