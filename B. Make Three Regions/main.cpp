#include <bits/stdc++.h>
using namespace std;

bool apple(vector<vector<bool>> &vec , long long x , long long y , long long n){
    bool ans=0;
    if((y>0)&&(y<n-1)){
        if (((vec[(x+1)%2][y+1])&&(vec[(x+1)%2][y-1]))&&((!vec[x][y+1])&&(!vec[x][y-1])&&(!vec[(x+1)%2][y])))ans=1;
    }
    return ans;   

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<vector<bool>> vec(2 , vector<bool> (n,0));
        string a,b;cin>>a>>b;
        for(long long i=0 ; i<n ;i++)if(a[i]=='x')vec[0][i]=1;
        for(long long i=0 ; i<n ;i++)if(b[i]=='x')vec[1][i]=1;

        long long ans=0;
        for(long long i=0 ; i<2 ;i++){
            for(long long j=0 ; j<n ;j++){
                if(apple(vec, i , j , n))ans++;
            }
        }
        cout<<ans<<endl;
       
    }
    
    
}