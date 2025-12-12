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
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        bool ano=0;
        vector<long long> ans;
        if(vec[0]==1){
            ano=1;
            ans.push_back(n+1);
        }
        for(long long i=0 ; i<n ; i++){
            ans.push_back(i+1);
            if((i+1<n)&&(vec[i]==0)&&(vec[i+1]==1)&&(!ano)){
                ano=1;
                ans.push_back(n+1);
            }
        }
        if((!ano)&&(vec[n-1]==0)){
            ano=1;
            ans.push_back(n+1);
        }
        if(ano){
            for(long long val:ans)cout<<val<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    
    
}