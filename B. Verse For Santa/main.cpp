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
        pair<long long , long long> ma = {0,0} ;
        for(long long i=0 ; i<n;i++){
            ma = max(ma , {vec[i] , i});
            k-=vec[i];
            if(k<0)break;
        }
        if(k>=0)ma.second = -1;
        cout<<ma.second+1<<endl;
    }
    
    
}