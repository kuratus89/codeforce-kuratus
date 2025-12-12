#include <bits/stdc++.h>
using namespace std;

void apple(vector<vector<bool>> &vec , vector<vector<bool>> &seen , long long i , long long j , vector<pair<long long , long long>> &ans , long long n , long long m){
    if(((i+1)<n)&&((j+1)<m)&&((vec[i][j])&&(vec[i+1][j])&&(vec[i][j+1]&&(vec[i+1][j+1])))){
        seen[i][j]=1;
        seen[i+1][j]=1;
        seen[i][j+1]=1;
        seen[i+1][j+1]=1;
        ans.push_back({i,j});
    }
    return;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,m;cin>>n>>m;
    vector<vector<bool>> vec(n ,vector<bool> (m,0)) , seen(n , vector<bool>(m,0));
    for(long long i=0 ; i<n; i++){
        for(long long j=0 ; j<m ;j++){
            long long temp;cin>>temp;
            if(temp==1)vec[i][j]=1;
        }
    }
    vector<pair<long long , long long>> ans;
    for(long long i=0 ; i<n ;i++){
        for(long long j=0 ; j<m ; j++){
            if(!vec[i][j])continue;
            apple(vec , seen , i , j , ans , n , m);
        }
    }
    bool ano=1;
    for(long long i=0 ; i<n ;i++){
        for(long long j=0 ; j<m ; j++){
            if(vec[i][j]&&(!seen[i][j]))ano=0;
        }
    }
    if(ano){
        cout<<ans.size()<<endl;
        for(auto val:ans)cout<<val.first+1<<" "<<val.second+1<<endl;
    
    }
    else {
        cout<<-1<<endl;
    }

    

    
    
}