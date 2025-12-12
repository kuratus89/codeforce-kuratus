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
        if(k>=n){
            cout<<1<<endl;
            continue;
        }
        vector<pair<long long , long long>> vec;
        map<long long , long long> ma;
        for(long long i=0 ; i<n ; i++){
            long long temp;cin>>temp;
            ma[temp]++;
        }
        for(auto val:ma)vec.push_back({val.second , val.first});
        sort(vec.begin()  ,vec.end());
        long long ans=0;
        for(auto val:vec){
            if((k<=0)||(val.first>k))ans++;
            else k-=val.first;
        }
        
        cout<<ans<<endl;
        
    }
    
    
}