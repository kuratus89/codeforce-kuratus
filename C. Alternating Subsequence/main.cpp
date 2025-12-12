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
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        bool na=0;
        if(vec[0]>0)na=1;
        long long ma = vec[0];
        long long ans=0;
        for(long long i=0 ;i<n; i++){
            if(na){
                if(vec[i]>0){
                    ma = max(ma , vec[i]);
                }
                else {
                    ans+=ma;
                    ma = vec[i];
                    na=0;
                }
            }
            else {
                if(vec[i]<0){
                    ma = max(ma , vec[i]);
                }
                else {
                    ans+=ma;
                    ma=vec[i];
                    na=1;
                }
            }
        }
        ans+=ma;
        cout<<ans<<endl;
    }
    
    
}