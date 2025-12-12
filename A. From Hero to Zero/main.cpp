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
        long long ans=0;
        while(n>0){
            if(n<k){
                ans+=n;
                break;
            }
            if(n%k==0){
                n/=k;
                ans++;
            }
            else{
                long long x= n%k;
                n-=x;
                ans+=x;
            }
            
        }
        cout<<ans<<endl;
    }
    
}