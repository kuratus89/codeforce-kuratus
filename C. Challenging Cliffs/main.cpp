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
        vector<long long > vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        sort(vec.begin() , vec.end());
        long long val=1;
        for(long long i=1 ;i<n; i++){
            if((vec[i]-vec[i-1])<(vec[val] - vec[val-1]))val=i;
        }
        vector<long long> ans;
        ans.push_back(vec[val-1]);
        
        for(long long i=val+1 ; i<n ; i++)ans.push_back(vec[i]);
        for(long long i=0 ;i<val-1 ; i++)ans.push_back(vec[i]);
        ans.push_back(vec[val]);
        for(long long vol:ans)cout<<vol<<" ";
        cout<<endl;
    }
    
    
}