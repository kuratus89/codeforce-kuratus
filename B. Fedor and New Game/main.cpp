#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    
    long long n,m,k;cin>>n>>m>>k;
    vector<long long> vec(m);
    for(long long i=0 ; i<m; i++)cin>>vec[i];
    long long x;cin>>x;
    for(long long i=0 ; i<m ; i++)vec[i] = vec[i]^x;
    long long ans=0;
    for(long long i=0 ; i<m ;i++)if(__builtin_popcountll(vec[i])<=k)ans++;
    cout<<ans<<endl;
    
}