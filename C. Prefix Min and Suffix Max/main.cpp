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
        for(long long i=0 ; i<n;  i++)cin>>vec[i];
        vector<bool> ans(n);
        ans[0]=1;
        ans[n-1]=1;
        for(long long i=1 ; (i<n)&&(vec[i]<vec[i-1]) ;i++ )ans[i]=1;
        for(long long i=n-2 ; (i>=0)&&(vec[i]>vec[i+1]) ; i--)ans[i]=1;
        for(long long i=0 ; i<n ;i++){
            if(ans[i])cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    
    
}