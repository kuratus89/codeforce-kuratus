#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k;cin>>n>>k;
    vector<long long> vec(n);
    for(long long i=0 ;i<n ;i++)cin>>vec[i];
    if(k>=n){
        long long ma=0;
        for(long long i=0 ; i<n ; i++)ma = max(ma , vec[i]);
        cout<<ma<<endl;
        return 0;
    }
    queue<long long> qe;
    long long ans=0;
    pair<long long , long long> pl;
    for(long long i=0 ; i<n ; i++)qe.push(vec[i]);
    pl = {qe.front() , 0};
    qe.pop();
    while(pl.second!=k){
        if(pl.first>qe.front()){
            pl.second++;
            qe.push(qe.front());
            
        }
        else {
            qe.push(pl.first);
            pl = {qe.front() , 1};
        }
        qe.pop();
        
    }
    ans = pl.first;
    cout<<ans<<endl;
    
    
    
}