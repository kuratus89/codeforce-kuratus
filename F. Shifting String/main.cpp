#include <bits/stdc++.h>
using namespace std;

long long apple(string &s , vector<long long> &vec , long long i , char ch , long long n){
    if(s[i]==ch)return n;
    return apple(s , vec , vec[i]-1 , ch , n+1);
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
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        vector<long long> val(n);
        for(long long i=0 ; i< n;i++){
            if(vec[i]==i+1)val[i]=-1;
            else val[i] = apple(s , vec , vec[i]-1 , s[i] , 1);
        }
        long long ans=1;
        for(long long i=0 ; i<n ;i++){
            if(val[i]==-1)continue;
            ans = lcm(ans , val[i]);
        }
        cout<<ans<<endl;
    }
    
    
}