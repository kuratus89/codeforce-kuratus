#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        string s;cin>>s;
        long long x=0;
        for(auto val:s)if(val=='Y')x++;
        if(x>=2)cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    
    
}