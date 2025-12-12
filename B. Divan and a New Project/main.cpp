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
        vector<long long> vec(n);
        for(long long i=0 ; i<n;  i++)cin>>vec[i];
        priority_queue<pair<long long , long long>> qe;
        for(long long i=0 ; i<n; i++)qe.push({vec[i] , i+1});
        vector<long long> ans(n+1);
        ans[0]=0;
        long long ano=0 , l=-1 , r=1;

        while(!qe.empty()){
            long long  in = qe.top().second;
            ans[in]=r;
            ano += 2LL * r * vec[in-1];

            r++;
            qe.pop();
            
            if(qe.empty())break;
            in = qe.top().second;
            ans[in]=l;
            ano += 2LL*(-l)*vec[in-1];
            l--;
            
            qe.pop();
        }
        cout<<ano<<endl;
        for(auto val:ans)cout<<val<<" ";
        cout<<endl;
    }
    
    
}