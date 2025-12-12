#include <bits/stdc++.h>
using namespace std;

void apple(vector<vector<bool>>&ans,long long i , long long j , long long a , long long b){
    ans[i][j]=1;
    ans[i][j+1]=1;
    ans[i][j+2]=1;
    ans[i+1][j+2]=1;
    ans[i+2][j+2]=1;
    ans[i+2][j+1]=1;
    ans[i+2][j]=1;
    ans[i+1][j]=1;
    return;    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long a,b;cin>>a>>b;
    vector<vector<bool>>vec(a , vector<bool> (b , 0)) , ans=vec;
    for(long long i=0 ; i<a ; i++){
        string s;cin>>s;
        for(long long j=0 ; j<b; j++)if(s[j]=='#')vec[i][j]=1;
    }
    for(long long i=0 ; i<a ;i++){
        for(long long j=0 ; j<b ;j++){
            if(!vec[i][j])continue;
            if(((i+2)>=a)||((j+2)>=b))continue;
            if(vec[i][j+1]&&(vec[i+1][j]))apple(ans , i, j , a , b);
        }
    }
    bool ano=1;
    for(long long i=0 ; i<a ;i++){
        for(long long j=0 ; j<b ; j++){
            if(vec[i][j]&&(!ans[i][j]))ano=0;
        }
    }
    if(ano)cout<<"YES";
    else cout<<"NO";
    

    
    
}