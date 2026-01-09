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
        if(s[0]=='s')s[0]='.';
        if(s.back()=='p')s.back()='.';
        bool ss=0,p=0;
        for(auto val:s){
            if(val=='s')ss=1;
            if(val=='p')p=1;
        }
        if(ss&p)cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    
    
}