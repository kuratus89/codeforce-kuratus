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
        vector<long long> a(n) , b(n);
        for(long long i=0 ; i<n; i++)cin>>a[i];
        for(long long i=0 ; i<n; i++)cin>>b[i];
        long long ans=0;
        for(long long i=1 ; i<n; i++)a[i]+=a[i-1];
        for(long long i=1 ; i<n; i++)b[i]=max(b[i] , b[i-1]);
        for(long long i=0; i<min(n ,k); i++){
            long long apple = a[i];
            long long orange = b[i];
            ans = max(ans , apple + (orange*(k-i-1)));       
        }
        cout<<ans<<endl;
    }
    
    
}