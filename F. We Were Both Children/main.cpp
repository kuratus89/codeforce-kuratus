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
        vector<long long> cn(n+1 , 0) , val(n+1 , 0);
        for(long long i=0 ; i<n; i++)if(vec[i]<=n)cn[vec[i]]++;
        long long ans=0;
        for(long long i=1 ;i<=n; i++){
            for(long long j=i ; j<=n ; j+=i){
                 val[j]+=cn[i];
            }
        }
        for(long long i=1 ; i<=n; i++)ans = max(ans , val[i]);
        
        cout<<ans<<endl;
    }
    
    
}