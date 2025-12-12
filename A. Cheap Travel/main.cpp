#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,m,a,b;cin>>n>>m>>a>>b;
    long long ans=0;
    if((b>=(m*a))){
        cout<<n*a;
        return 0;
    }
    long long val= n/m;
    long long cn = min((n%m)*a , b);
    ans+=val*b;
    ans+=cn;
    cout<<ans<<endl;
    
    
}