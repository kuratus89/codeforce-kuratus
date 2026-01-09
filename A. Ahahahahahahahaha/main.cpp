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
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        long long z=0,o=0;
        for(long long i=0 ; i<n; i++){
            if(vec[i]==0)z++;
            else o++;
        }
        if(z>=o){
            cout<<z<<endl;
            for(long long i=0 ; i<z ; i++)cout<<0<<" ";
        }
        else {
            long long ans;
            if(o%2)ans = o-1;
            else ans=o;
            cout<<ans<<endl;
            for(long long i=0 ; i<ans ; i++)cout<<1<<" ";
        }
        cout<<endl;
    }
    
    
}