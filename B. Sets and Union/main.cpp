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
        vector<vector<long long>> vec(n);
        vector<map<long long , bool>> domi(n);
        for(long long i=0 ; i<n; i++){
            long long k;cin>>k;
            while(k--){
                long long temp;cin>>temp;
                vec[i].push_back(temp);
                domi[i][temp]=1;
            }
        }
        map<long long , long long> ma;
        for(auto ap:vec)for(auto val:ap)ma[val]++;
        long long mi = LLONG_MAX;
        for(auto val:ma)mi = min(mi , val.second);
        long long ans=0;
        for(auto val:ma){
            set<long long> se;
            for(long long i=0 ; i<n; i++){
                if(domi[i][val.first])continue;
                for(auto cloro:vec[i])se.insert(cloro);
            }
            ans = max((long long)se.size() , ans);
        }
        cout<<ans<<endl;
    }
    
    
}