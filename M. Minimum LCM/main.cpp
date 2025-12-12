#include <bits/stdc++.h>
using namespace std;

void apple(long long n  , vector<long long> &ans){
    for(long long i=1 ; i*i <=n ; i++){
        if(n%i==0){
            ans.push_back(i);
            if(i!=n/i)ans.push_back(n/i);
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        if(n&2==0){
            cout<<n/2<<" "<<n/2<<endl;
            continue;
        }
        vector<long long> vec ; 
        apple( n ,vec);
        map<long long , bool> ma;
        for(long long val:vec)ma[val]=1; 
        pair<long long , pair<long long , long long>> ans= {LLONG_MAX, {0,0}};
        for(auto val:ma){
            if(ma[n - val.first]){
                ans = min(ans , {lcm(val.first , n - val.first) , { val.first , n - val.first}});
            }
        }
        if(ans.first == LLONG_MAX)ans.second = {1 , n-1};
        cout<<ans.second.first<<" "<<ans.second.second<<endl;

    }
    
}