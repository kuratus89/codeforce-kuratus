#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    
        long long n;cin>>n;
        vector<string> vec(n);
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        map<long long , long long> ma;
        long long ans=0;
        for(long long i=0 ; i<n ;i++){
            long long cn=0;
            for(auto val:vec[i])cn = cn^(1LL<<(val-'a'));
            ans+=ma[cn];
            for(long long j=0 ; j<26 ; j++)ans+=ma[cn^(1LL<<j)];
            ma[cn]++;
        }
        cout<<ans<<endl;
    
    
}