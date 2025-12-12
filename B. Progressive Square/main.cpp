#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,a,b;cin>>n>>a>>b;
        vector<long long> vec(n*n);

        for(long long i=0 ; i<(n*n) ; i++)cin>>vec[i];
        long long mini=LLONG_MAX;
        for(long long i=0 ; i<(n*n); i++)mini = min(mini , vec[i]);
        vector<vector<long long>> gr( n , vector<long long> (n));
        vector<long long> ans;
        gr[0][0]=mini;
        for(long long i=1 ; i<n ; i++)gr[0][i] = gr[0][i-1] + b;
        for(long long i=1 ; i<n ; i++){
            for(long long j=0 ;j<n; j++){
                gr[i][j] = gr[0][j] + (i*a);
            } 
        }
        
        
        map<long long , long long > ma,mb;
        for(long long i=0 ; i<n; i++){
            for(long long j=0 ; j<n ; j++)ma[gr[i][j]]++;
        }
        for(auto val:vec)mb[val]++;
        if(ma==mb)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        
    }
    
}