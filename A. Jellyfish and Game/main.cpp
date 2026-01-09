#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,m,k;cin>>n>>m>>k;
        vector<long long> a(n) , b(n);
        for(long long i=0 ; i<n; i++)cin>>a[i];
        for(long long i=0 ; i<n; i++)cin>>b[i];
        long long amin=LLONG_MAX , bmin = LLONG_MAX ,  amax=0 , bmax=0;
        
        for(long long i=0 ; i<n; i++){
            amin = min(amin , a[i]);
            amax = max(amax , a[i]);
        }
        for(long long i=0 ; i<n; i++){
            bmin = min(bmin , b[i]);
            bmax = max(bmax , b[i]);
        }
        if(amin>bmax)

    }
    
    
}