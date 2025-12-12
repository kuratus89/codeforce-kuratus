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
        vector<bool>ans(n , 0);
        deque <long long> al;
        bool stage=1;
        ans[0]=1;
        al.push_back(vec[0]);
        for(long long i=1 ; i<n ; i++){
            if(stage){
                
                if(vec[i]>=al.back()){
                
                    ans[i]=1;
                    al.push_back(vec[i]);
                }
                else{
                    if(vec[i]>al.front())continue;
                    stage =0;
                    ans[i]=1;
                    al.push_back(vec[i]);
                }
            }
            else {
                if((vec[i]<=al.front())&&(vec[i]>=al.back())){
                    al.push_back(vec[i]);
                    ans[i]=1;
                }
                // else ans[i]=0;
            }
        }
        for(auto val:ans){
            if(val)cout<<1;
            else cout<<0;
            
        }
        cout<<endl;
    }

    
}