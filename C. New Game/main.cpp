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
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        map<long long , long long> ma;
        for(long long i=0 ; i<n; i++)ma[vec[i]]++;
        queue<long long> qe;
        long long sum=0;
        long long it=-1;
        long long ans=0;
        for(auto val:ma){
            if((val.first==it+1)||(it==-1)){
                qe.push(val.second);
                sum+=val.second;
                if(qe.size()>k){
                    sum-=qe.front();
                    qe.pop();
                }
            }
            else {
                sum=val.second;
                while(!qe.empty())qe.pop();
                qe.push(val.second);
            }
            ans = max(ans , sum);
            it = val.first;
        }
        cout<<ans<<endl;
    }
    
}