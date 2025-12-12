#include <bits/stdc++.h>
using namespace std;

bool apple(vector<long long> &vec , long long n , long long k){
    long long ans=0;
    for(long long val:vec){
        if(val<n)ans+=(n-val);
        if(ans>k) return 0;
    }
    // vector<pair<long long , long long>> ano;
    // for(long long i=0 ; i<vec.size(); i++){
    //     if(vec[i]>n)ano.push_back({vec[i]-n , i});
    // }
    // for(long long i=0; i<ano.size()-1 ; i++){
    //     ans+= min(ano[i].first , ano[i+1].first) * (ano[i+1].second - ano[i].second -1);
    // }
    return (ans<=k);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        long long low=0 , high=1e14, mid , ans;
        while(low<high){
            mid =(high+low)/2;
            if(apple(vec , mid , k)){
                low=mid+1;
                ans=mid;
            }
            else{
                high= mid;
            }
        }
        cout<<ans<<endl;
    }
    
    
}