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
        if(k>=31)cout<<n+1<<endl;
        else cout<<min(n+1 , (long long) (1<<k))<<endl;
    }
    
    
}