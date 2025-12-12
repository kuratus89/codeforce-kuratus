#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k;cin>>n>>k;
    vector<long long> vec(n);
    for(long long i=0 ; i<n;i ++)cin>>vec[i];
    sort(vec.begin() , vec.end());
    long long ans=-1;
    if(k==n)ans = vec[n-1];
    else if(k==0)ans =vec[0]-1;
    else if(vec[k-1]!=vec[k])ans=vec[k-1];
    if(ans<1)ans=-1;
    cout<<ans<<endl;
    
    
}