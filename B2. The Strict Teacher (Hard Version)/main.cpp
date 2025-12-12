#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;
    cin>>tt;
    while(tt--){
        long long n,t,p;cin>>n>>t>>p;
        vector<long long> vec(t);
        for(long long i=0 ; i<t; i++)cin>>vec[i];
        // vec[t]=0;
        // vec[t+1] = n;
        sort(vec.begin() , vec.end());
        while(p--){
            long long x;cin>>x;
            bool lt =0 , rt=0;
            auto it = upper_bound(vec.begin() , vec.end() , x);
            // cout<<it-vec.begin()<<endl;
            long long idx= it- vec.begin();
            long long ans;
            if(it==vec.end()){
                ans = abs(vec[idx-1]-n);
            }
            else if(idx==0){
                ans = abs(vec[idx]-1);
            }
            else{
                ans = (abs(vec[idx]-vec[idx-1]))/2;
            }

            cout<<ans<<endl;
            
        }
    }
    
    
}