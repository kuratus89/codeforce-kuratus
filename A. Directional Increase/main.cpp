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
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        for(long long i=1 ; i<n; i++)vec[i]+=vec[i-1];
        bool ans=1;
        for(long long i=0 ; i<n; i++)if(vec[i]<0)ans=0;
        long long l=n-1;
        while((l>=0)&&(!vec[l]))l--;
        for(long long i=0 ; i<l ;i++)if(vec[i]==0)ans=0;
        if(vec[n-1]!=0)ans=0;
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;      
    }
    
    
}