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
        long long ma=0 , sum=0;
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        for(long long i=0 ; i<n; i++){
            ma = max(ma , vec[i]);
            sum+=vec[i];
        }
        long long ans;
        if((2*ma)<=sum)ans=1;
        else ans = (2*ma) - sum;
        bool z=1;
        for(long long i=0 ; i<n; i++)if(vec[i]!=0)z=0;
        if(z)ans=0;
        cout<<ans<<endl;
    }
    
    
}