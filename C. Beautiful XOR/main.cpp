#include <bits/stdc++.h>
using namespace std;
int main(){
    long long tt;cin>>tt;
    while(tt--){
        long long a,b;cin>>a>>b;
        long long x = a^b;
        if(a==b)cout<<0;
        else if(x<=a){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else if(a>b){
            
        }
        else {
            cout<<-1<<endl;
        }
    }
}