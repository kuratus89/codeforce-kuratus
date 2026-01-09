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
        string a,b;cin>>a>>b;
        vector<vector<pair<long long , long long>>> dp (2 , vector<pair<long long  , long long >> (n ,));
        dp[0][0] = {10, 1LL};
        if(a[0]=='1')dp[0][0].first++;      
        
        for(long long i=1 ; i<n;i++){
            dp[0][i] = {dp[0][i-1].first*10 , 1};
            if(a[i]=='1')dp[0][i-1].first++; 
        }

        dp[1][0] = {dp[0][0].first*10, 1};
        if(b[0]=='1')dp[1][0].first++;

        for(long long i=1 ; i<n; i++){
            long long  up = dp[0][i].first*10;
            long long  back = dp[1][i-1].first*10;
            string best = min(up , back);
            dp[1][i].first = best;
            if(best == up)dp[1][i].second+=dp[0][i].second;
            if(best == back)dp[1][i].second+=dp[1][i-1].second;
        }
        cout<<dp[1][n-1].first<<endl<<dp[1][n-1].second<<endl;
    }
    
}