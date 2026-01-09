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
        vector<pair<long long, long long>> vec;
        for(long long i=2 ; i*i<=n ;i++){
            if(n%i==0){
                vec.push_back({i , n-i});
                if(i*i!=n)vec.push_back({(n/i) ,( n - (n/i))});
            }
        }
        pair<long long , long long > ans = {n-1 , 1};
        for(auto val:vec){
            // cout<<val.first<<" "<<val.second<<" ";
            if(lcm(val.first , val.second)< lcm(ans.first , ans.second))ans = val;
        }
        
        cout<<ans.first<<" "<<ans.second;
        cout<<endl;
    }
    
}