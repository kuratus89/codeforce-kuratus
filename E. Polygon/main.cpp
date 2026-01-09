#include <bits/stdc++.h>
using namespace std;

void apple(vector<vector<bool>> &vec , vector<vector<bool>> &seen , long long x , long long y){
    if((x<0)||(y<0))return;
    if(!vec[x][y])return;
    if(seen[x][y])return;
    seen[x][y]=1;
    apple(vec , seen , x-1 , y);
    apple(vec , seen , x, y-1);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<vector<bool>> vec(n , vector<bool> (n,0));
        for(long long i=0 ; i<n; i++){
            string s;cin>>s;
            for(long long j=0 ; j<n; j++)if(s[j]=='1')vec[i][j]=1;
        }
        vector<vector<bool>> seen(n , vector<bool> (n,0));
        for(long long i=0 ;i<n; i++)apple(vec , seen,  n-1 , i);
        for(long long i=0 ; i<n;i++)apple(vec , seen , i , n-1);
        bool ans=1;
        for(long long i=0 ; i<n; i++){
            for(long long j=0 ; j<n; j++){
                if(vec[i][j]&&(!seen[i][j]))ans=0;
            }
        }
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}