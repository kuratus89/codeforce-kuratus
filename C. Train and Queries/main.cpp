#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,q;cin>>n>>q;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        map<long long , pair<long long , long long>> ma;
        for(long long i=0 ; i<n ; i++){
            if(ma.count(vec[i])==0){
                ma[vec[i]] = {i, i};
            }
            ma[vec[i]].first= min(ma[vec[i]].first ,i);
            ma[vec[i]].second = max(ma[vec[i]].second , i); 
        }
        while(q--){
            long long a,b;cin>>a>>b;
            if((ma.count(a)==0)||(ma.count(b)==0)){
                cout<<"NO"<<endl;
                continue;
            }
            bool ans;
            if(ma[a].first<ma[b].second)ans=1;
            else ans=0;
            if(ans)cout<<"YES";
            else cout<<"NO";
            cout<<endl;
        }
    }
    
    
}