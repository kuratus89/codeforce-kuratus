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
        for(long long i=0 ; i< n;  i++)cin>>vec[i];
        map<long long , bool> ma,mb;

        for(long long i=0 ; i<n ; i++)ma[vec[i]]=1;
        for(long long i=0 ; i<n ; i++)mb[vec[i]]=1;
        vector<long long> ans;
        for(long long i=0 ; i<n ; i++){
            if(ma[vec[i]]){
                ans.push_back(vec[i]);
                ma[vec[i]]=0;
            }
        }
        long long i=0;
        while(ans.size()!=n){
            i++;
            if(mb[i])continue;
            ans.push_back(i);
            
        }
        for(auto val:ans)cout<<val<<" ";
        cout<<endl;

    }
    
    
}