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
        map<long long , long long> ma;
        long long ans=0;
        for(long long i=0 ; i<n; i++){
            if(ma.count(vec[i])){
                ma[vec[i]]--;
                if(ma[vec[i]]==0)ma.erase(vec[i]);
            }
            else {
                ma[((1LL<<31)-1)^vec[i]]++;
                ans++;
            }
        }
        
        cout<<ans<<endl;
    }
    
    
}