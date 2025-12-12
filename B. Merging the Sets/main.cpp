#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        vector<vector<long long>> vec(n);
        for(long long i=0 ; i<n; i++){
            long long temp;cin>>temp;
            for(long long j=0 ; j<temp ; j++){
                long long temp2;cin>>temp2;
                vec[i].push_back(temp2);
            }
        }
        vector<bool> vl(k,0);
        for(auto val:vec){
            for(auto val2:val )vl[val2-1]=1;
        }
        bool ano=1;
        for(auto val:vl)if(!val)ano=0;
        if(!ano){
            cout<<"NO"<<endl;
            continue;
        }
        vector<map<long long , bool>> vol(n);
        for(long long i=0; i<n; i++){
            for(auto val:vec[i])vol[i][val]=1;
        }
        long long ans=0;
        for(long long i=0 ; i<vol.size() ; i++){
            for(auto val:vol[i]){
                for(long long j=0 ; j<vol.size() ; j++){
                    if(i==j)continue;
                    if(vol[j].count(val.first)!=0)ans++;
                    if(ans>=3)break;
                }
            }
        }
        if(ans>=3)cout<<"YES";
        else cout<<"NO";
        cout<<endl;



    }
    
}