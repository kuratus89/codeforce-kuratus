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
        long long ans =n-1;
        string s;cin>>s;
        long long cn=0;
        for(long long i=0 ; i<s.size()-2; i++){
            if(s[i]==s[i+2])cn++;
        }
        ans-=cn;
        cout<<ans<<endl;
    }
    
    
}