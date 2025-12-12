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
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        long long od=0, ev=0;
        for(long long i=0 ; i<n; i++){
            if(vec[i]%2==0)ev++;
            else od++;
        }
        // if(od==0){
        //     cout<<"NO"<<endl;
        //     continue;
        // }
        bool ans=0;
        long long val = ev;
        if(od%2==0)val+=od-1;
        else val+=od;
        if(val>=k)ans=1;
        if(od==0)ans=0;
        if((k%2==0)&&(ev==0))ans=0;
        
        if(ans)cout<<"YES";
        else cout<<"NO";
        // cout<<" "<<od<<" "<<ev;
        cout<<endl;

    }
    
    
}