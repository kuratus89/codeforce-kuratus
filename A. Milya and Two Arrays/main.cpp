#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> a(n),b(n);
        for(long long i=0 ; i<n; i++)cin>>a[i];
        for(long long i=0 ; i<n; i++)cin>>b[i];
        set<long long> ma,mb;
        
        for(long long i=0 ; i<n; i++)ma.insert(a[i]);
        for(long long i=0 ; i<n; i++)mb.insert(b[i]);
        long long ans= ma.size()+mb.size();
        if(ans>=4)cout<<"YES";
        else cout<<"NO";
        cout<<endl;

    }
    
    
}