#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        for(long long i=1 ; i<n; i++)vec[i]+=vec[i-1];
        long long ans=0 ;
        for(long long i=0 ; i<n ;i++){
            long long sum;
            if(i==0)sum=vec[n-1];
            else sum = vec[n-1]-vec[i-1];
            if(sum%k!=0){
                ans = max(ans , (n-i));
            }
        }
        for(long long i=0 ; i<n ;i++){
            if((vec[i]%k)!=0)ans=max(ans, (i+1));
        }
        if(ans==0)ans=-1;
        cout<<ans<<endl;
        
    }
    
}