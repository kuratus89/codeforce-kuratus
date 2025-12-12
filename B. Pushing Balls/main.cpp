#include <bits/stdc++.h>
using namespace std;

void apple(vector<vector<bool>> &vec , long long n , vector<vector<bool>> &mar){
    for(long long i=0 ; i<vec[n].size() ; i++){
        if(!vec[n][i])return;
        mar[n][i]=1;
    }
}
void orrange(vector<vector<bool>> &vec , long long n , vector<vector<bool>> &mar){
    for(long long i=0 ; i<vec.size(); i++){
        if(!vec[i][n])return;
        mar[i][n]=1;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long a,b;cin>>a>>b;
        vector<vector<bool>> vec(a , vector<bool> (b , 0));
        for(long long i=0 ; i<a ; i++){
            string s;cin>>s;
            for(long long j=0 ; j<b ; j++){
                if(s[j]=='1')vec[i][j]=1;
            }
        }
        bool ans=1;
        vector<vector<bool>> mar(a , vector<bool> (b , 0));
        for(long long i=0 ; i<a ; i++)apple(vec , i , mar);
        for(long long i=0 ; i<b ; i++)orrange(vec , i , mar);
        for(long long i=0 ; i<a ; i++){
            for(long long j=0 ; j<b ; j++){
                if(vec[i][j]&&(!mar[i][j]))ans=0;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    
}