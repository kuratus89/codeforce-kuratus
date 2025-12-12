#include <bits/stdc++.h>
using namespace std;

bool apple(long long n , vector<long long> &vec , long long k){
    __int128 ans=0;
    for(long long val:vec){
        ans+=((val+(2*n))*(val+(2*n)));
    }
    return ans<=k;
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
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        long long low =0 , high=1e9, mid , ans=0;;
        while(low<high){
            mid = (low+high)/2;
            if(apple(mid , vec , k)){
                low=mid+1;
                ans=mid;
            }
            else high=mid;
        }
        cout<<ans<<endl;
    }
    
    
}