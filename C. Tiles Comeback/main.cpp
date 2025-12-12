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
        map<long long , long long> ma;
        vector<long long>vec(n);
        for(long long i=0 ; i<n;  i++)cin>>vec[i];
        for(long long i=0 ; i<n ; i++)ma[vec[i]]++;
        long long ans=0;
        for(auto val:ma){
            if(val.second>=k)ans++;
        }
        bool ano=1;
        if(ma[vec[0]]<k)ano=0;
        if(ma[vec[n-1]]<k)ano=0;
        // if(ans<k)ano=0;
        if(ano)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}