#include <bits/stdc++.h>
using namespace std;
int main(){
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        long long left = n-1;
        long long ans = k;
        vector<long long> people(n);
        vector<long long > mon(n);
        for(long long i=0 ; i<n ; i++)cin>>people[i];
        for(long long i=0 ; i<n ; i++)cin>>mon[i];
        vector<pair<long long  , long long>> se;
        for(long long i=0 ; i<n ; i++)se.push_back({mon[i] , people[i]});
        sort(se.begin() , se.end());
        for(auto it = se.begin(); (it != se.end())&&(left>0); it++){
            long long pp = (*it).second;
            long long mono = min((*it).first , k);
            long long nom = min(pp , left);
            
            ans+=(nom*mono);
            left-=nom;
        }
        cout<<ans<<endl;
    }
}