#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec(n);
    // for(long long i=0 ; i<n; i++)cin>>vec[i];
    cout<<0%2;
    long long od=0,ev=0;
    for(long long i=0 ; i<n ;i++){
        if(vec[i]%2==0)ev++;
        else od++;
    }
    if((od%2==0)&&(od==0))cout<<"Second";
    else cout<<"First";
    // long long sum=0;
    // for(long long i=0 ; i<n ; i++)sum+=vec[i];
    // if(sum%2==0)cout<<"Second";
    // else cout<<"First";
    
    
}