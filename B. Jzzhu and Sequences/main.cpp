#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long x,y,n;cin>>x>>y>>n;
    n--;
    long long mod = 1e9+7;
    vector<long long>ans = {x , y , y-x ,-x , -y , -y+x};
    cout<<((ans[n%6]%mod)+mod)%mod;
    
    
}