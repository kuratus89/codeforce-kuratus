#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        string s;cin>>s;
        map<char , pair<long long , long long>> ma;
        for(char val:s){
            if(islower(val))ma[val].first++;
            else ma[tolower(val)].second++;
        }
        long long ans=0;
        for(auto val:ma){
            long long t=min(val.second.first , val.second.second);
            val.second.first-=t;
            val.second.second-=t;
            ans+=t;
            long long le= max(val.second.first , val.second.second);
            long long ca = le / 2;
            long long ex = min(k, ca);
            ans += ex;
            k -= ex;
        }
        cout<<ans<<endl;
    }
    
}