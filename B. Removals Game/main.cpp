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
        bool ans=1;
        vector<long long> a(n),b(n);
        for(long long i=0 ; i<n; i++)cin>>a[i];
        for(long long i=0 ; i<n; i++)cin>>b[i];
        for(long long i=0 ;i<n; i++)if(a[i]!=b[i])ans=0;
        if(ans){
            cout<<"Bob"<<endl;
            continue;
        }
        ans=1;
        for(long long i=0 ; i<n; i++)if(a[i]!=b[n-i-1])ans=0;
        if(ans)cout<<"Bob";
        else cout<<"Alice";
        cout<<endl;
        
    }
    
    
}