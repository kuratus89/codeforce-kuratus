#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k;cin>>n>>k;
    vector<long long> vec(n);
    for(long long i=0 ; i<n; i++)cin>>vec[i];
    map<long long , long long> ma;
    long long ans=LLONG_MAX;
    for(long long i=0 ; i<n; i++){
        if(ma.count(vec[i])){
            ans=min(ans,ma[vec[i]]);
        }
        else ma[vec[i]]=0;
        if(ma.count(vec[i]&k)){
            ans=min(ans , (vec[i]&k));
        }
        else ma[vec[i]&k]=1;
    }
    if(ans==LLONG_MAX)ans=-1;
    cout<<ans<<endl;
    
    
}