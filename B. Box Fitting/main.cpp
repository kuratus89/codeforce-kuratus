#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    // easy peasy
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        priority_queue<long long> qe;
        qe.push(k);
        long long ans=1;
        sort(vec.rbegin() , vec.rend());
        for(long long i=0 ; i<n; i++){
            if(qe.top()<vec[i]){
                qe.push(k);
                ans++;
            }
            long long x=qe.top();
            x-=vec[i];
            qe.pop();
            qe.push(x);
        }
        cout<<ans<<endl;
    }
    
    
}