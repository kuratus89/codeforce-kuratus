#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec(n);
    for(long long i=0 ; i<n; i++)cin>>vec[i];
    map<long long , long long> ma = {{4,0} , {8,0} , {15,0} , {16,0} , {23,0} , {42,0}};
    for(long long i=0 ; i<n ;i++)ma[vec[i]]++;
    long long mini=LLONG_MAX;
    for(auto val:ma)mini = min(mini , val.second);
    long long ans=0;
    if(mini<(n/6))mini=0;
    if(mini>(n/6))mini = n/6;
    for(auto val:ma){
        ans+=(val.second - mini);
    }
    cout<<ans<<endl;
    
    
}