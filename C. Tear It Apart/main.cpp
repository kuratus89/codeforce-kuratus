#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        string s;cin>>s;
        long long ans=LLONG_MAX;
        for(long long i=0 ; i<26 ; i++){
            char ch = (char) i+'a';
            long long ma=-1;
            long long cn=0;
            for(long long i=0 ; i<s.size(); i++){
                if(s[i]==ch){
                    ma = max(cn , ma);
                    cn=0;
                }
                else cn++;
            }
            ma = max(cn , ma);
            if(ma!=-1)ans = min(ans , ma);
        }
        // if((ans%2==0)&&(ans!=0))ans = log2(ans);
        // else 
        if(ans!=0)ans = log2(ans)+1;
        cout<<ans<<endl;
    }
    
}