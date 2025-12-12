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
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        pair<long long , long long> sm = {vec[0] , 0};
        for(long long i=0 ; i<n ;i++)sm = min(sm , {vec[i], i});
        bool ans=1;
        for(long long i=sm.second+1 ; i<n ;i++)if(vec[i]<vec[i-1])ans=0;
        if(ans)cout<<sm.second;
        else cout<<-1;
        cout<<endl;
    }
    
    
}