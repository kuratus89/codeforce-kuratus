#include <bits/stdc++.h>
using namespace std;

pair<long long , long long> mai(vector<vector<long long>> &vec , long long n){
    pair<long long , pair<long long , long long>> ans={0 , {0,0}};
    for(long long i=0 ; i<vec.size() ; i++){
        ans = max(ans , {vec[i][n] , {i,n}});
    }
    return ans.second;
}
pair<long long , long long> mav(vector<vector<long long>> &vec , long long n){
    pair<long long , pair<long long , long long>> ans={0 , {0,0}};
    for(long long i=0 ; i<vec[n].size() ; i++){
        ans = max(ans , {vec[n][i] , {n , i}});
    }
    return ans.second;
}



int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long x,y;cin>>x>>y;
    long long tt;cin>>tt;
    vector<vector<long long>> vec(x , vector<long long> (y));
    for(long long i=0 ; i<x ; i++)for(long long j=0 ; j<y ; j++)cin>>vec[i][j];
    map<long long , map<long long , long long>> ma;
    for(long long i=0 ; i <x ; i++){
        for(long long j=0 ; j<y ; j++){
            if()
        }
    }
    while(tt--){
        long long a,b,k;cin>>a>>b>>k;
        
    }
    
}