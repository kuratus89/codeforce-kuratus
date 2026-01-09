#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,x,y;cin>>n>>x>>y;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        map<pair<long long , long long>, long long> ma;
        long long ans=0;
        for(long long i=0 ; i<n ;i++){
            ans+= ma[{((x - (vec[i]%x))%x) , vec[i]%y}];
            ma[{vec[i]%x , vec[i]%y}]++;
        }
        cout<<ans<<endl;
        

    }
    
    
}