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
        vector<long long> vec(n-1);
        for(long long i=0 ; i<n-1 ; i++)cin>>vec[i];
        vector<long long> ans;
        ans.push_back(vec[0]);
        for(long long i=0 ; i<n-2 ;i++){
            ans.push_back(min(vec[i] , vec[i+1]));
        }
        ans.push_back(vec[n-2]);
        for(long long val:ans)cout<<val<<" ";
        cout<<endl;
    }
    
}