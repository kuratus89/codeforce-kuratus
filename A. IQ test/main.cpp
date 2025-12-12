#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec(n);
    vector<long long> par(2,0);
    for(long long i=0 ; i<n; i++)cin>>vec[i];
    for(long long i=0 ; i<n; i++)par[vec[i]%2]++;
    for(long long i=0 ; i<n; i++)if(par[vec[i]%2]==1)cout<<i+1<<" ";    
}