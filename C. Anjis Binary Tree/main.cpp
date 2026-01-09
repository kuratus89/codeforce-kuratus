#include <bits/stdc++.h>
using namespace std;

long long apple(vector<pair<long long , long long>> &vec , long long i , string &s){
    if((vec[i].first==0)&&(vec[i].second==0))return 0;
    long long ans =LLONG_MAX;
    long long l=0 , r=0;
    if(s[i]=='L')r=1;
    else if(s[i]=='R')l=1;
    else {
        r=1;
        l=1;
    }
    if(vec[i].first!=0)ans = min(ans , apple(vec , vec[i].first -1, s )+l);
    if(vec[i].second!=0)ans = min(ans , apple(vec , vec[i].second-1 , s )+r);
    return ans;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        string s;cin>>s;
        vector<pair<long long , long long>> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i].first>>vec[i].second;
        cout<<apple(vec , 0 , s)<<endl;
    }
    
}