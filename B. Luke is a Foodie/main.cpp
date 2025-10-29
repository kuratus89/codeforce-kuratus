#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        pair<long long ,long long> range ={vec[0]-k , vec[0]+k};
        long long ans=0;
        for(long long i=0 ; i<n ; i++){
            if((vec[i]+k<range.first)||(vec[i]-k>range.second)){
                ans++;
                range = {vec[i]-k , vec[i]+k};
            }
            else {
                range.first = max(range.first , vec[i]-k);
                range.second = min(range.second , vec[i]+k);
            }
        }
        cout<<ans<<endl;
        
    }
    

}   
