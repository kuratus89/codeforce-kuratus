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
        if((n%2==0)&&(n>=4))cout<<(n+5)/6<<" "<<n/4<<endl;
        else cout<<-1<<endl;
    }
}