#include <bits/stdc++.h>
using namespace std;
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
        for(long long i=0 ; i<n; i++)if(a[i]=='>')vec[0][i]=1;
        for(long long i=0 ; i<n; i++)if(b[i]=='>')vec[1][i]=1;
        queue<pair<bool ,long long>> qe;
        qe.push({0,0});
        bool ans=0;
        vector<vector<bool>> seen(2 , vector<bool> (n,0));
        while(!qe.empty()){
            long long x=qe.front().first, y = qe.front().second;
            if((x==1)&&(y==n-1)){
                ans=1;
                break;
            }
            qe.pop();
            if(seen[x][y]){
                continue;
            }
            seen[x][y]=1;
            pair<long long , long long> opt1={(x+1)%2,y} , opt2 = {x,y+1};
            if(vec[opt1.first][opt1.second])opt1.second++;
            else opt1.second--;
            if(opt2.second<n){
                if(vec[opt2.first][opt2.second])opt2.second++;
                else opt2.second--;
            }
            if((opt1.second<n)&&(opt1.second>=0))qe.push(opt1);
            if((opt2.second<n)&&(opt2.second>=0))qe.push(opt2);           
        }
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;       
        
        
    }
    
    
}