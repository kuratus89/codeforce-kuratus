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
        vector<long long > a(n),b(n);
        for(long long i=0 ; i<n; i++)cin>>a[i];
        for(long long i=0 ; i<n; i++)cin>>b[i];
        long long ans=0;
        for(long long i=0 ; i<n; i++)ans+=max(a[i] , b[i]);
        vector<long long>ano(n);
        for(long long i=0 ; i<n; i++)ano[i] = min(a[i] , b[i]);
        sort(ano.rbegin() , ano.rend());
        for(long long i=0 ; i<(k-1) ; i++)ans+=ano[i];
        ans++;
        cout<<ans<<endl;

        

    }
    
}