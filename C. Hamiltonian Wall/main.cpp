#include <bits/stdc++.h>
using namespace std;

void apple(vector<vector<bool>> &vec , vector<vector<bool>> &seen , long long x , long long y ,long long n){
    seen[x][y]=1;
    if(vec[(x+1)%2][y]&&(!seen[(x+1)%2][y]))apple(vec , seen , (x+1)%2 , y,n);
    else if((y+1<n)&&vec[x][y+1])apple(vec , seen , x , y+1 , n);
    
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
        string one;cin>>one;
        for(long long i=0 ; i<n; i++)if(one[i]=='B')vec[0][i]=1;
        string two;cin>>two;
        for(long long i=0 ; i<n; i++)if(two[i]=='B')vec[1][i]=1;
        if(n==1){
            cout<<"YES";
            cout<<endl;
            continue;
        }
        bool ans=1 , ans2=1;
        vector<vector<bool>> seen(2 , vector<bool> (n,0));
        vector<vector<bool>> seen2(2 , vector<bool> (n,0));
        if(vec[0][0])apple(vec , seen , 0,0 , n);
        if(vec[1][0])apple(vec , seen2 , 1 , 0 , n);
        
        for(long long i=1 ; i<n; i++){
            if((vec[0][i])&&(!seen[0][i]))ans=0;
            if((vec[1][i])&&(!seen[1][i]))ans=0;
        }
        for(long long i=1 ; i<n; i++){
            if((vec[0][i])&&(!seen2[0][i]))ans2=0;
            if((vec[1][i])&&(!seen2[1][i]))ans2=0;
        }
        if(ans||ans2)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
        
        
    }
    
}