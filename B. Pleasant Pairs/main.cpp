#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        long long ans=0;
        vector<pair<long long , long long >> vec(n);
        
        for(long long i=0 ; i<n; i++){
            cin>>vec[i].first;
            vec[i].second = i+1;
        }
        sort(vec.begin() , vec.end());
        for(long long i=0; i<n; i++)for(long long j=i+1 ;(j<n)&&(vec[j].first*vec[i].first)<(2*n); j++)if(vec[i].first*vec[j].first==(vec[i].second+vec[j].second))ans++;
        cout<<ans<<endl;
    }
    
    
}