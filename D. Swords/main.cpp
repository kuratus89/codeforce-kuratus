#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec(n);
    for(long long i=0 ; i<n ;i++)cin>>vec[i];
    long long ans=0 , ma=0 ;
    vector<long long> val=vec;
    for(long long i=0 ; i<n ;i++)ma = max(ma , vec[i]);
    for(long long i=0 ; i<n ;i++)vec[i]-=ma;
    long long hcf=vec[0];
    for(long long i=1 ; i<n ;i++)hcf = gcd(hcf , vec[i]);
    for(long long i=0 ; i<n ;i++)ans+= (ma-val[i])/hcf;
    cout<<ans<<" "<<hcf;
}