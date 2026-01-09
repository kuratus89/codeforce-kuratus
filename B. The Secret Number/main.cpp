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
        long long x=11;
        vector<long long> ans;
        while(n>=x){
            if(n%x==0)ans.push_back(n/x);
            x = ((x-1)*10)+1;
        }
        cout<<ans.size()<<endl;
        sort(ans.begin() , ans.end());
        for(auto val:ans)cout<<val<<" ";
        if(ans.size()!=0)cout<<endl;
    }
    
    
}