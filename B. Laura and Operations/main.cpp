#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long a,b,c;cin>>a>>b>>c;
        if((b+c)%2==0)cout<<1;
        else cout<<0;
        cout<<" ";
        if((a+c)%2==0)cout<<1;
        else cout<<0;
        cout<<" ";
        if((b+a)%2==0)cout<<1;
        else cout<<0;
        cout<<endl;
    }
    
    
}