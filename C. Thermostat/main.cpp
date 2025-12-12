#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long l,r,x;cin>>l>>r>>x;
        long long a,b;cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        if(abs(a-b)>=x){
            cout<<1<<endl;
            continue;
        }
        if((abs(a-l)<x)&&(abs(a-r)<x)){
            cout<<-1<<endl;
            continue;
        }
        if((abs(a-l)>=x)&&(abs(l-b)>=x)){
            cout<<2<<endl;
            continue;
        }
        if((abs(a-r)>=x)&&(abs(b-r)>=x)){
            cout<<2<<endl;
            continue;
        }
        if((abs(a-r)>=x)&&(abs(r-l)>=x)&&(abs(l-b)>=x)){
            cout<<3<<endl;
            continue;
        }
        if((abs(a-l)>=x)&&(abs(r-l)>=x)&&(abs(r-b)>=x)){
            cout<<3<<endl;
            continue;
        }
        cout<<-1<<endl;
        
        
        


    }
    
    
}