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
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n%2!=0){
            cout<<-1<<endl;
            continue;
        }
        if(n==2){
            cout<<2<<" "<<1<<endl;
            continue;
        }
        vector<long long> ans;
        ans.push_back(n);
        ans.push_back(1);
        while(ans.size()!=n){
            long long sl = ans[ans.size()-2];
            long long l = ans[ans.size()-1];
            if(sl-2>0)ans.push_back(sl-2);
            if(l+2<n)ans.push_back(l+2);
        }
        for(long long val:ans)cout<<val<<" ";
        cout<<endl;
    }
    
    
}