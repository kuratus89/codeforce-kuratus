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
        long long ans=0;
        long long n=s.size();
        for(long long i=0 ; i<n;i++){
            if((i==0)||(i==n-1)){
                if(s[i]=='u'){
                    s[i]='s';
                    ans++;
                }
                if(i==n-1)break;
            }
            if(s[i+1]=='u'){
                if(i+1==n-1){
                    s[i+1]='s';
                    ans++;
                    break;
                }
                if((s[i+2]=='u')){
                    s[i+2]='s';
                    ans++;
                    i++;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    
}