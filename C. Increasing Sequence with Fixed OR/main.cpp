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
        vector<long long> ans;
        for(long long i=0 ; (n>>i)>0 ; i++){
            if(((n>>i)&1)){
                if((n^(1LL<<i))==0)continue;
                ans.push_back(n^(1LL<<i));
            }
        }
        ans.push_back(n);
        sort(ans.begin() , ans.end());
        cout<<ans.size()<<endl;
        for(auto val:ans)cout<<val<<" ";
        cout<<endl;
    }
    
}