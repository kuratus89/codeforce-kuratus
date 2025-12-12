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
        
        long long ans=0;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        for(long long i=0 ; i<(n-3) ; i++)if((vec[i]==vec[i+1])&&(vec[i+2]==vec[i+3])){vec[i+1]=0; vec[i+2]=0;ans++;}
        vector<bool> seen(n,0);
        vector<long long> apple;
        for(long long i=0 ; i<n ; i++){
            if(seen[i])continue;
            long long cn=0;
            for(long long j=i ; ((j<n)&&(vec[i]==vec[j])) ; j++){
                cn++;
                seen[j]=1;
            }
            if(cn>=2)apple.push_back(cn);
        }
        for(auto val:apple)ans+=max((long long)1 , val-3);
        cout<<ans<<endl;
    }
    
    
}