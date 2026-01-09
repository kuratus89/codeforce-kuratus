#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,m;cin>>n>>m;
        vector<long long> indi(n) , paise(m);
        for(long long i=0 ; i<n; i++)cin>>indi[i];
        for(long long i=0 ; i<m; i++)cin>>paise[i];
        priority_queue<
            pair<long long , long long>,
            vector<pair<long long , long long>>,
            greater<pair<long long , long long>>
        >qe;
        for(long long i=0 ; i<m;i++)qe.push({paise[i],i});
        sort(indi.rbegin() , indi.rend());
        long long ans=0;
        map<long long , bool> ma;
        for(long long i=0 ; i<n; i++){
            if((qe.empty())||(qe.top().first>=paise[indi[i]-1])){
                ans+=paise[indi[i]-1];
            }
            else {
                ans+=qe.top().first;
                qe.pop();
            }
            ma[indi[i]-1]=1;
            while((!qe.empty())&&(ma[qe.top().second]))qe.pop();
        }
        
        cout<<ans<<endl;
        
    }
    
}