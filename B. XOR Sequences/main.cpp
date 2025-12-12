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
        for(long long i=0 ; i<30  ; i++){
            if(((a>>i)&1)!=((b>>i)&1)){
                cout<<(1<<i)<<endl;
                break;
            }
        }
    }
    
    
}