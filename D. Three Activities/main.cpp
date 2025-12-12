#include <bits/stdc++.h>
using namespace std;

void apple(vector<vector<pair<long long , long long>>> &vec , long long n  , long long &ans , vector<bool> &seen , long long ano ){
    if(n==3){
        ans = max(ans , ano);
        return;
    }
    for(long long i=0 ; i<3 ;i++){
        if(!seen[vec[n][i].second]){
            ano+=vec[n][i].first;
            seen[vec[n][i].second]=1;
            apple(vec , n+1 , ans , seen , ano);
            ano-=vec[n][i].first;
            seen[vec[n][i].second]=0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<vector<pair<long long , long long>>> vec (3 , vector<pair<long long ,  long long >> (n ));
        for(long long i=0; i<3 ; i++){
            for(long long j=0 ;j<n; j++){
                cin>>vec[i][j].first;
                vec[i][j].second = j;
            }
        }
        sort(vec[0].rbegin() , vec[0].rend());
        sort(vec[1].rbegin() , vec[1].rend());
        sort(vec[2].rbegin() , vec[2].rend());
        long long ans=0;
        vector<bool> seen(n,0);
        long long ano=0;
        apple(vec , 0 , ans , seen ,ano);
        cout<<ans<<endl;
    }
    
}