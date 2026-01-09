#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long a,b;cin>>a>>b;
        vector<vector<bool>> vec(a , vector<bool> (b,0));
        for(long long i=0 ; i<a ; i++){
            string s;cin>>s;
            for(long long j=0 ; j<b ;j++){
                if(s[j]=='1')vec[i][j]=1;
            }
        }
        vector<vector<long long>> ans;
        bool va=1;
        for(long long i=b-1 ; i>0; i--){
            for(long long j=0 ; j<a ; j++){
                if(!vec[j][i])continue;
                ans.push_back({j+1 ,i, j+1 , i+1});
            }
        }
        for(long long i=a-1 ; i>0; i--){
            if(!vec[i][0])continue;
            ans.push_back({i , 1 , i+1 , 1});
        }
        if(vec[0][0])va=0;
        if(!va){
            cout<<-1<<endl;
            continue;
        }
        cout<<ans.size()<<endl;
        for(auto val:ans)cout<<val[0]<<" "<<val[1]<<" "<<val[2]<<" "<<val[3]<<endl;
    }
    
    
}