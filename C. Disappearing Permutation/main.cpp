#include <bits/stdc++.h>
using namespace std;

long long apple(vector<long long> &vec , vector<bool> &seen , long long i){
    if(seen[i])return 0;
    seen[i]=1;
    return (apple(vec , seen , vec[i]-1)+1);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> vec(n) , que(n) ;
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        for(long long i=0 ; i<n ;i++)cin>>que[i];
        vector<bool> seen(n,0);
        long long ans=0;
        for(long long i=0 ; i<n; i++){
            ans+=apple(vec , seen , que[i]-1);
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    
}