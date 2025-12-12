#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n ,a,b,c;cin>>n>>a>>b>>c;
    vector<long long> dp(n+1 , 0);
    for(long long i=0 ;i <n; i++){
        if((dp[i]==0)&&(i!=0))continue;
        if(i+a<=n)dp[i+a] = max(dp[i+a] , dp[i]+1);
        if(i+b<=n)dp[i+b] = max(dp[i+b] , dp[i]+1);
        if(i+c<=n)dp[i+c] = max(dp[i+c] , dp[i]+1);
    }
    cout<<dp[n]<<endl;
    
    
}