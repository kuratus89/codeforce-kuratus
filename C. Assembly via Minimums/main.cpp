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
        long long cn = n*(n-1);
        cn/=2;
        vector<long long> vec(cn);
        for(long long i=0 ; i<cn ; i++)cin>>vec[i];
        sort(vec.begin() , vec.end());
        n--;
        vector<long long> ans;
        for(long long i=0 ; i<cn ; i+=n--){
            ans.push_back(vec[i]);
            // n--;
        }
        ans.push_back(1e9);
        for(long long val:ans)cout<<val<<" ";
        cout<<endl;
    }
    
}