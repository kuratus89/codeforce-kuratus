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
        long long ans;
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        for(long long i=1 ; i<n-1; i++)vec[i] = max((long long)0 , vec[i]);
        if((vec[0]==-1)&&(vec[n-1]==-1)){
            
            vec[0]=0;
            vec[n-1]=0;
        }
        else if(vec[0]==-1)vec[0] = vec[n-1];
        else if(vec[n-1]==-1)vec[n-1] = vec[0];
        ans = vec[n-1] - vec[0];
        cout<<abs(ans)<<endl;
        for(long long val:vec)cout<<val<<" ";
        cout<<endl;
    }
    
    
}