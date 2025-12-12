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
        vector<long long> vec(n);
        for(long long i=0 ; i<n;  i++)cin>>vec[i];
        map<long long , long long> ma;
        for(long long i=0 ; i<n; i++)ma[vec[i]]++;
        long long ans = 0;
        for(auto val:ma){
             if(ma.count(val.first - 1)!=0){
                long long t=k;
                long long cn=0;
                cn+=min(ma[val.first -1] , t/(val.first-1));
                t -=cn*(val.first-1);
                cn+=min(val.second, t/(val.first));
                ans = max(ans , cn);
             }
             if(ma.count(val.first +1)!=0){
                long long t=k;
                long long cn=0;
                cn+=min(val.second , t/(val.first));
                t -=cn*val.first;
                cn+=min(ma[val.first +1] , t/(val.first+1));
                ans = max(ans , cn);
                
             }
        }
        cout<<ans<<endl;
    }
    
    
}