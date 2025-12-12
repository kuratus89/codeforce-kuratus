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
        vector<string> vec(a);
        for(long long i=0 ; i<a; i++)cin>>vec[i];
        pair<long long ,long long> x({-1,-1});
        long long y;
        for(long long i=0 ; i<a ; i++){
            long long cn=0;
            
            for(long long j=0; j<b ; j++){
                if(vec[i][j]=='#')cn++;
                
            }
            if(cn==1){
                for(long long j=0 ; j<b ; j++)if(vec[i][j] =='#')y = j;
                if(x.first!=-1)x.first = i;
                else {
                    x.second=i;
                    break;
                }
                
            }
        }
        if(x.second==-1)cout<<x.first<<" "<<y<<endl;
        else cout<<(x.second  - x.first+1)<<" "<<y<<endl;
    }
    
    
}