#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    // again shit problem
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,l,r,k;cin>>n>>l>>r>>k;
        if(n%2){
            cout<<l<<endl;
            continue;
        }
        if(n==2){
            cout<<-1<<endl;
            continue;
        }
        long long po=1;
        bool ans=0;
        while(po<=r){
            if(po>l){
                ans=1;
                if(k<=(n-2))cout<<l;
                else cout<<po;
                cout<<endl;
                break;
            }
            po*=2;
        }
        if(!ans)cout<<-1<<endl;
    }
    
    
}