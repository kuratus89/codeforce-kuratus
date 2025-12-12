#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        vector<long long> vec(n);
        vector<long long> dis(k);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        for(long long i=0 ; i< k ; i++)cin>>dis[i];
        sort(dis.begin() , dis.end());
        priority_queue<long long> qe;
        for(long long i=0 ; i<n ; i++)qe.push(vec[i]);
        long long ans=0;
        for(long long i=0 ; i<k ; i++){
            long long j=dis[i]-1;
            while((j--)&&(!qe.empty())){
                ans+=qe.top();
                qe.pop();
            }
            if(!qe.empty())qe.pop();
        }
        while(!qe.empty()){
            ans+=qe.top();
            qe.pop();
        }
        cout<<ans<<endl;

    }
    
}