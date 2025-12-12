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
        vector<long long> ano;
        long long q=n;
        vector<stack<long long>> vec(n);
        for(long long i=0 ; i<n ; i++){
            for(long long j=0 ; j<n-1;j++ ){
                long long temp;cin>>temp;
                vec[i].push(temp);
            }
        }
        stack<long long> ans;
        while(ans.size()!=n){
            map<long long , long long> ma;
            for(auto val:vec){
                if(val.empty())continue;
                ma[val.top()]++;
            }
            pair<long long , long long> maxo = {0,0};
            for(auto val:ma){
                if(val.second>maxo.second)maxo=val;
            }
            for(auto &val:vec){
                if(val.empty())continue;
                if(val.top()==maxo.first)val.pop();
            }
            
            ans.push(maxo.first);
        }
        while(!ans.empty()){
            cout<<ans.top()<<" ";
            ans.pop();
        }
        cout<<endl;

    }
    
}