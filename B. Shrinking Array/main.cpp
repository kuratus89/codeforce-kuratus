#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n ;cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        bool ans=0;
        for(long long i=1 ; i<n ; i++){
            if(abs(vec[i-1]-vec[i])<=1){
                ans=1;
            }
        }
        if(ans){
            cout<<0<<endl;
            continue;
        }
        
        for(long long i=1 ; i<n ; i++){
            long long x=min(vec[i] , vec[i-1]) , y= max(vec[i] , vec[i-1]);
            if((i-2)>=0)if((y>=vec[i-2])&&(x<=vec[i-2])){
                ans=1;
                break;
            }
            if((i+1)<n)if((y>=vec[i+1])&&(x<=vec[i+1])){
                ans=1;
                break;
            }

        }
        if(ans){
            cout<<1<<endl;
        }
        else cout<<-1<<endl;
    }
    
    
}