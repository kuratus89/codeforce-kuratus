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
    pair<long long , pair<long long , long long>> cn={0,{0,0}};
    for(long long i=0 ; i<n; i++){
        if(vec[i]==0){
            cn.first++;
            cn.second.second++;
        }
        else {
            cn.first--;
            cn.second.second++;
        }
        cn = max({0,{i+1,i}} , cn);
    }
    long long len = cn.second.second-cn.second.first;
    long long ans=0;
    for(long long i=1 ; i<n; i++)vec[i]+=vec[i-1];
    for(long long i=0 ; i<(n-cn) ; i++){
        long long sum = vec[n-1];
        long long mid;
        if(i==0)mid = vec[cn-1];
        else mid = vec[i+cn-1] - vec[i-1];
        sum-=mid;
        mid = (cn) - mid;
        ans = max(ans , sum+mid);
    }
    cout<<ans<<endl;
    
    
}