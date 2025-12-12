#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        
        if(((k*k)<=n)&&(((n%2==0)&&(k%2==0))||((n%2!=0)&&(k%2!=0))))cout<<"YES";
        else cout<<"NO";
        cout<<endl;
        
    }
    
    
}