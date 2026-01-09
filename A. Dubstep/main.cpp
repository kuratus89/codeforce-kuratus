#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    string s;cin>>s;
    string ans;
    bool ent=0;
    for(long long i=0 ; i<s.size(); ){
        if((i<(s.size()-2))&&(s[i]=='W')&&(s[i+1]=='U')&&(s[i+2]=='B')){
            i+=3;
            if(!ans.empty())ent=1;
        }
        else {
            if(ent)ans.push_back(' ');
            ent=0;
            ans.push_back(s[i]);
            i++;
        }
    }
    cout<<ans<<endl;
    
}