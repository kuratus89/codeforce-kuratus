#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec(n);
    for(long long i=0 ; i<n ;i++)cin>>vec[i];
    long long mi=LLONG_MAX , ma = LLONG_MIN;
    map<long long , long long> mp;
    for(long long i=0 ; i<n ;i++){
        mi = min(mi , vec[i]);
        ma = max(ma , vec[i]);
    }
    long long x=0 , y=0;
    for(long long i=0 ; i<n ;i++){
        if(vec[i]==mi)x++;
        if(vec[i]==ma)y++;
    }
    long long ans;
    if((ma-mi)==0){
        ans = (x*(x-1))/2;
    }
    else ans = x*y;
    cout<<ma-mi<<" "<<ans;
    
    
}