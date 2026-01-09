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
        string s;cin>>s;
        long long ans=0;
        for(long long i=0 ; i<n ;i++)if(s[i]=='1')vec[i]=1;
        for(long long i=1 ; i<n ; i++)vec[i]+=vec[i-1];
        for(long long i=0 ; i<n ;i++){
            long long x=max(0LL , i-k);
            long long y=min(n-1 , i+k);
            long long sum;
            if(x==0)sum= vec[y];
            else sum = vec[y]-vec[x-1];
            if(sum==0){
                ans++;
                i+=k;
            }
        }
        cout<<ans<<endl;
    }
    
}