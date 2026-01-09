#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    // used editorial
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        long long k;cin>>k;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        long long ans=0;
        if(k==1){
            long long a=0,b=0;
            for(long long i=1;i<n-1; i++)a=max(a , vec[i]);
            b=a;
            a=max(a , vec[0]);
            b = max(b , vec.back());
            ans = max(a+vec.back() , b+vec[0]);
        }
        else{
            sort(vec.rbegin() , vec.rend());
            for(long long i=0 ; i<=min(k,n-1); i++)ans+=vec[i];
        }
        cout<<ans<<endl;
    }
    
    
}