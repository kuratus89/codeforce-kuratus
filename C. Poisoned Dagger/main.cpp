#include <bits/stdc++.h>
using namespace std;

long long apple(vector<long long> &vec , long long k){
    long long ans=0;
    for(long long i=0 ; i<vec.size()-1 ;i++){
        ans+=min(k , vec[i+1]-vec[i]);
    }
    ans+=k;
    return ans;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;
        cin>>n>>k;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        long long low=0  , high=1e18 ,mid;
        while(low<high){
            mid = (low+high)/2;
            if(apple(vec , mid)>=k)high=mid;
            else low = mid+1;
        }
        cout<<low<<endl;
    }
    
    
}