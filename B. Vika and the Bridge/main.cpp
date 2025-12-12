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
        vector<long long > vec(n);
        for(long long i=0; i<n; i++)cin>>vec[i];
        if(k==1){
            cout<<0<<endl;
            continue;
        }
        // if(k==n){
        //     cout<<(n/2)-1<<endl;
        //     continue;
        // }
        map<long long , vector<long long>> ma;
        for(long long i=0 ; i<n; i++){
            if(ma[vec[i]].empty())ma[vec[i]].push_back(0);
            ma[vec[i]].push_back(i+1);
        }
        long long ans=LLONG_MAX;
        for(auto val:ma){
            vector<long long> vol;
            for(long long i=1 ;i<val.second.size(); i++)vol.push_back(val.second[i] - val.second[i-1]-1);
            vol.push_back(n+1 - val.second.back()-1);
            sort(vol.rbegin() , vol.rend());
            long long ano = vol[0]/2;
            ano = max(ano , vol[1]);
            ans = min(ano , ans);
        }
        cout<<ans<<endl;
    }
    
}