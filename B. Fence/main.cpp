#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k;cin>>n>>k;
    k--;
    vector<long long> vec(n);
    for(long long i=0; i<n; i++)cin>>vec[i];
    pair<long long , long long> ans ={LLONG_MAX , 0};
    for(long long i=1 ; i<n ;i++)vec[i]+=vec[i-1];
    for(long long i=0 ; i<(n-k) ; i++){
        long long sum;
        if(i==0)sum = vec[k];
        else sum = vec[i+k] - vec[i-1];
        ans = min(ans , {sum , i+1});
    }
    cout<<ans.second<<endl;
    
    
}