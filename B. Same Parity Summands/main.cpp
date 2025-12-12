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
        bool ans=0;
        if(((n-k+1)>0)&&((n-k+1)%2!=0)){
            cout<<"YES"<<endl;
            cout<<n-k+1<<" ";
            k--;
            while(k--)cout<<1<<" ";
            ans=1;
        }
        else if(((n-(2*(k-1)))>0)&&((n-(2*(k-1)))%2==0)){
            cout<<"YES"<<endl;
            cout<<(n-(2*(k-1)))<<" ";
            k--;
            while(k--)cout<<2<<" ";
            ans=1;
        }
        if(!ans)cout<<"NO";
        cout<<endl;

    }
    
    
}