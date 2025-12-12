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
        vector<long long> ano;
        for(long long i=0 ; i<n; i++)if(vec[i]>=vec[k-1])ano.push_back(vec[i]);
        sort(ano.begin() , ano.end());
        bool ans=1;
        long long dif= vec[k-1];
        
        for(long long i=1 ; i<(ano.size()) ; i++)if((ano[i] - ano[i-1])>dif)ans=0;
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}