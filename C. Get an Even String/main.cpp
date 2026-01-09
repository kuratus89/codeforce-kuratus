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
        vector<bool> vec(26 , 0);
        long long ans =0;
        for(auto val:s){
            if(vec[val-'a']){
                ans+=2;
                for(long long i=0 ; i<26 ; i++)vec[i]=0;
            }
            else vec[val - 'a']=1;
        }
        cout<<s.size()-ans<<endl;
    }
    
    
}