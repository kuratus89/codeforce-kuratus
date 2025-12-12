#include <bits/stdc++.h>
using namespace std;



int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    
    long long tt;cin>>tt;
    while(tt--){
        long long a,b;cin>>a>>b;
        long long ans;
        if(a*2<=b){
            ans=a;
        }
        else if(b*2<=a){
            ans=b;
        }
        else{
            ans = (a+b)/3;
        }
        cout<<ans<<endl;
    }
    
}