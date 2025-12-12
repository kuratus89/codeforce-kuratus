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
        for(long long i=0; i<n; i++)cin>>vec[i];
        
        sort(vec.begin() , vec.end());
        for(long long i=1; i<n ;i++)vec[i]+=vec[i-1];
        long long ans=LLONG_MIN;
        for(long long i=0 ; i<=k ; i++ ){
            long long l;
            long long r;
            l = (2*i)-1;
            r = n - (k-i) - 1;
            long long sum ;
            if(i==0)sum = vec[r];
            else sum = vec[r] - vec[l];
            ans = max(ans , sum);
        }
        cout<<ans<<endl;

    }
    
    
}