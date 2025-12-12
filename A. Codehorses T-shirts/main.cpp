#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    map<string , long long> ma,mb;
    for(long long i=0 ; i<n ;i++){
        string s;cin>>s;
        ma[s]++;
    }
    for(long long i=0 ; i<n ;i++){
        string s;cin>>s;
        mb[s]++;
    }
    long long ans=0;
    for(auto val:ma){
        ans+=max(0LL,(val.second - mb[val.first]));
    }
    cout<<ans<<endl;
    
}