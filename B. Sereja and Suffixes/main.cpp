#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,q;cin>>n>>q;
    vector<long long> vec(n);
    for(long long i=0 ; i<n; i++)cin>>vec[i];
    set<long long> ma;
    vector<long long> ans(n);
    for(long long i=n-1 ; i>=0; i--){
        ma.insert(vec[i]);
        ans[i] = ma.size();
    }
    while(q--){
        long long x;cin>>x;
        cout<<ans[x-1]<<endl;
    }
    
    
}