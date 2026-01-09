#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long k,n;cin>>k>>n;
        string s;cin>>s;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        map<long long , bool> ma;
        for(long long i=0 ; i<n; i++)ma[vec[i]]=1;
        long long i=1;
        for(auto val:s){
            if(val=='B'){
                i++;
                while(ma[i])i++;
                ma[i]=1;
                i++;
                while(ma[i])i++;
            }
            else {
                i++;
                ma[i]=1;
                // i++;
            }
        }
        vector<long long> ans;
        for(auto val:ma)if(val.second)ans.push_back(val.first);
        cout<<ans.size()<<endl;
        for(auto val:ans)cout<<val<<" ";
        cout<<endl;
    }
    
    
}