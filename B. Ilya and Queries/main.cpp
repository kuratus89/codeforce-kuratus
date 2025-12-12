#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    string s;cin>>s;
    long long tt;cin>>tt;
    long long n=s.size();
    vector<long long> vec(n,0);
    for(long long i=0 ; i<(n-1); i++)if(s[i]==s[i+1])vec[i]=1;
    for(long long i=1 ; i<n ; i++)vec[i]+=vec[i-1];
    while(tt--){
        long long a,b;cin>>a>>b;
        a--;b-=2;
        long long ans;
        if(a==0)ans=vec[b];
        else ans = vec[b] - vec[a-1];
        cout<<ans<<endl;
    }
    
    
}