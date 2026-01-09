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
        vector<long long> vec(n) ;
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        vector<long long> val(n);
        for(long long i=0 ; i<n; i++)val[i] = abs(vec[i]);
        for(long long i=1; i<n; i++)val[i]+=val[i-1];
        for(long long i=1; i<n; i++)vec[i]+=vec[i-1];
        
        long long ans = LLONG_MIN;
        for(long long i=0 ; i<n; i++){
            long long lsum,rsum;
            if(i==0){
                rsum = vec[n-1] - vec[0];
                lsum = 0;
                ans = max(ans , lsum - rsum);
            }
            else {
                lsum = val[i-1] - val[0]; 
                rsum = vec[n-1] - vec[i];
                ans = max(ans , lsum - rsum + vec[0]);
            }
            
        }
        cout<<ans<<endl;
        
        
    }
    
    
}