#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    string  s;cin>>s;
    long long ans =0 , cn=0 , x=0;
    for(long long i=1 ; i<s.size() ; i++){
        if((s[i]=='v')&&(s[i-1]=='v')){
            ans+=cn;
            x++;
        }
        if(s[i]=='o'){
            cn+=x;
        }
    }
    cout<<ans<<endl;
    
    
}