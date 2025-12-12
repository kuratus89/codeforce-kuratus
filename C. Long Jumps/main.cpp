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
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        vector<long long> ans(n+1,0);
        for(long long i=0 ; i<n; i++){
            long long x=vec[i];
            if((x+i)>n) ans[n] = max(ans[n] , ans[i]+x);
            else ans[x+i] = max((ans[i]+x) , ans[x+i]);
        }
        cout<<ans[n]<<endl;
    }
    
    
}