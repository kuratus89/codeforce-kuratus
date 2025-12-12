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
        if(n==2){
            cout<<1<<endl;
            continue;
        }
        if((n<4)||(n%2!=0))cout<<0<<endl;
        else cout<<(n/4)+1<<endl;
    }
    
    
}