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
        string s;cin>>s;
        long long cn=0;
        map<char, long long> ma;
        long long ans=0;
        for(auto val:s){
            ma[val]++;
            if(ma[val]==1)cn++;
            ans+=cn;
        }
        cout<<ans<<endl;
    }
    
    
}