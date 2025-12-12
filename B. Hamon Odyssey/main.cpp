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
        vector<bool> seen(n,0);
        
        long long ans=1;
        long long an=vec[0];
        for(long long i=0 ; i<n ; i++){
            an = an&vec[i];
            if((an==0)&&(i<(n-1))){
                ans++;
                an = vec[i+1];
                
            }


        }
        if(an!=0)ans--;
        if(ans<1)ans=1;
        cout<<ans<<endl;
    }
    
    
}