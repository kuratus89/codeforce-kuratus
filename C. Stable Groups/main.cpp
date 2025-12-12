#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k,x;cin>>n>>k>>x;
    vector<long long> vec(n);
    for(long long i=0 ; i<n ;i++)cin>>vec[i];
    sort(vec.begin() , vec.end());
    vector<long long> gap;
    for(long long i=1 ; i<n ;i++)if((vec[i]-vec[i-1])>x)gap.push_back(vec[i]- vec[i-1]);
    sort(gap.begin() , gap.end());
    long long ans=0;
    for(auto it= gap.begin() ; it<gap.end() ; it++){
        long long cn =(*it-1)/x;
        // cout<<*it<<endl;
        if(k>=cn)k-=cn;
        else ans++;
    }
    cout<<ans+1<<endl;
    
}