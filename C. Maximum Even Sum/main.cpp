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
        if(((a%2==0)&&(b==1))||((a%2==0)&&(b%2!=0))){
            cout<<-1<<endl;
            continue;
        }
        if((a%2!=0)&&(b%2==0)){
            if(b%4==0){
                cout<<((a*(b/2))+(2))<<endl;
                continue;
            }
            else {
                cout<<-1<<endl;
                continue;
            }
        }
        if((a%2!=0)&&(b%2!=0)){
            cout<<((a*b)+1)<<endl;
            continue;
        }
        if((a%2==0)&&(b%2==0)){
            cout<<((a*(b/2))+2)<<endl;
            continue;
        }

    }
    
    
}