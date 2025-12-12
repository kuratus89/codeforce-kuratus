#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        vector<long long> vec(n);
        for(long long i=0 ; i<k ;i++)cin>>vec[i];
        long long cn=LLONG_MAX;
        bool ans=1;
        for(long long i=k-1 ; i>0 ; i--){
            if((vec[i]-vec[i-1])<=cn){
                cn = vec[i] - vec[i-1];
            }
            else {
                ans =0;
                break;
            }
        }
        if((vec[0]>cn))ans=0;
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}