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
        long long o=0 , z=0;
        for(char val:s){
            if(val=='0')z++;
            else o++;
        }
        vector<long long> ans;
        for(long long i=0 ; i<z ; i++){
            if(s[i]!='0')ans.push_back(i+1);
        }
        for(long long i=z ; i<n ; i++)if(s[i]!='1')ans.push_back(i+1);
        if(!ans.empty())cout<<1<<endl;
        cout<<ans.size()<<" ";
        for(auto val:ans)cout<<val<<" ";
        cout<<endl;

    }
    
}