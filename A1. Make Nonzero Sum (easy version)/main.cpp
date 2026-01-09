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
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        if(n%2){
            cout<<-1<<endl;
            continue;
        }
        vector<pair<long long , long long>> ans;
        for(long long i=1 ; i<n ;i+=2){
            if(vec[i]==vec[i-1])ans.push_back({i , i+1});
            else{
                ans.push_back({i,i});
                ans.push_back({i+1,i+1});
            }
        }
        cout<<ans.size()<<endl;
        for(auto val:ans)cout<<val.first<<" "<<val.second<<endl;
    }
    
    
}