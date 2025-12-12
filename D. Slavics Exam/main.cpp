#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        string a,b;cin>>a>>b;
        if(a.size()<b.size()){
            cout<<"NO"<<endl;
            continue;
        }
        long long x=0;
        for(long long i=0; i<a.size() ; i++){
            if(x>=b.size())break;
            if((a[i]==b[x])||(a[i]=='?')){
                a[i] =b[x];
                x++;
            }
        }
        for(long long i=0; i<a.size() ; i++){
            if(a[i]=='?')a[i]='x';
        }
        if(x>=b.size()){
            cout<<"YES"<<endl;
            cout<<a;
        }
        else cout<<"NO";
        cout<<endl;

    }
    
    
}