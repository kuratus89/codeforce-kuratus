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
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        long long mi=vec[0];
        for(long long i=1 ; i<n ; i++)mi = min(vec[i] , mi);
        map<long long , bool> ma;
        for(long long i=0 ; i<n; i++)ma[vec[i]]=1;
        for(long long i=0 ; i<n; i++)vec[i]-=mi;
        sort(vec.rbegin() , vec.rend());
        long long x=vec[0];
        for(long long i=1 ; i<n; i++)if(vec[i]!=0)x = gcd(x ,vec[i]);
        long long a=x;
        while(ma[a])a+=x;
        long long ans=0;
        for(long long i=0 ; i<n; i++){
            
        }
        
        
    }
    
    
}