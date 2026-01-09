#include <bits/stdc++.h>
using namespace std;
void apple(vector<long long> &a , vector<long long> &b, map<long long , long long> &ma ,map<long long , long long> &mb  , vector<bool> &swaped , long long i ){
    if(swaped[i])return;
    swaped[i]=1;
    long long x = a[i];
    long long y = b[i]; 
    long long mx = mb[a[i]];
    long long my = ma[b[i]];
    apple(a , b , ma , mb , swaped , mx);
    apple(a , b , ma , mb , swaped , my);       
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> a(n) , b(n);
        for(long long i=0 ; i<n; i++)cin>>a[i];
        for(long long i=0 ; i<n; i++)cin>>b[i];
        map<long long , long long> ma , mb;
        for(long long i=0 ; i<n; i++)ma[a[i]]=i;
        for(long long i=0 ; i<n; i++)mb[b[i]]=i;
        long long ans=1;
        vector<bool> swaped(n,0);
        for(long long i=0 ; i<n; i++){
            if(swaped[i])continue;
            ans= (ans*2)%((long long)1e9+7);
            apple(a , b , ma , mb , swaped , i);
        }
        cout<<ans<<endl;


    }
    
    
}