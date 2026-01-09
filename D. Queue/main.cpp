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
    sort(vec.begin(), vec.end());
    long long ans=1;
    long long ti=vec[0];
    // for(long long val:vec)cout<<val<<" ";
    // cout<<endl;
    for(long long i=1 ; i<n; i++){
        if(ti>vec[i])continue;
        ans++;
        ti+=vec[i];
    }
    cout<<ans<<endl;
    
    
}