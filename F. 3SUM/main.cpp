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
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        map<long long , long long> ma;
        for(long long i=0 ;i<n; i++)ma[vec[i]%10]++;
        bool ans=0;
        for(auto val:ma){
            if(ans)break;
            for(auto vol:ma){
                if(ans)break;
                if((val.first==vol.first))continue;
                for(auto vxl:ma){
                    if(ans)break;
                    if(((vol.first==vxl.first)))continue;
                    if((val.first==vxl.first))continue;
                    if(((val.first+vol.first+vxl.first)%10)==3)ans=1;
                }
            }
            for(auto val:ma){
                if(ans)break;
                if(val.second<=1)continue;
                for(auto vol:ma){
                    if(ans)break;
                    if(val.first==vol.first)continue;
                    if(((val.first+val.first+vol.first)%10)==3)ans=1;
                }
            }
            for(auto val:ma){
                if(ans)break;
                if(val.second<=2)continue;
                if(((val.first*3)%10)==3)ans=1;
            }
        }
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}