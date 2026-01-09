#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //bro just leave this problem , its shit
    // i am just forced to do this prob ,
    // and ofc i see editorial , and i watched yt totrial;
    // *_*
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        long long x=__builtin_popcountll(k);
        if(n<=x){
            cout<<k<<endl;
            continue;
        }
        if((n-x)%2==0){
            cout<<(k+n-x)<<endl;
            continue;
        }
        if(k==1){
            cout<<n+3<<endl;
            continue;
        }
        if(k>1){
            cout<<k+n-x+1<<endl;
            continue;
        }
        if(n!=1)cout<<n+3;
        else cout<<-1;
        cout<<endl;
    }
    
    
}