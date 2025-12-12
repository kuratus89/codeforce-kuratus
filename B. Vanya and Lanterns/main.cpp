#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k;cin>>n>>k;
    vector<long long> vec(n);
    for(long long i=0 ; i<n; i++)cin>>vec[i];
    sort(vec.begin()  , vec.end());
    double ans=0;
    for(long long i=1 ; i<n; i++)ans = max(ans ,(double) abs((vec[i]-vec[i-1])/(double)2));
    ans = max(ans , (double)abs(0 - vec[0]));
    ans = max(ans , (double) abs(k - vec[n-1]));
    cout<<fixed<<setprecision(10)<<ans<<endl;
    
    
}