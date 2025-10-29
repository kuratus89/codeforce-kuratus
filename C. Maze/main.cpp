#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll= long long;
#define f(i,n) for(int i=0;i<n;i++)
#define sorted(x) sort(x.begin(),x.end());
#define rsorted(x) sort(x.rbegin(),x.rend());
#define rev(x) reverse(x.begin(),x.end());
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vpii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<ll, ll> umap_ll;
typedef unordered_map<string, int> umap_si;

bool apple(vector<vector<bool>> &path , vector<vector<bool>> &ans , vector<vector<bool>> &seen , long long &k , pair<long long , long long > pos , long long a , long long b , pair<long long , long long > par){
    long long x = pos.first , y = pos.second;
    if((x<0)||(y<0)||(x>=a)||(y>=b))return 1;
    
    if(!path[x][y])return 1;

    if(seen[x][y])return ans[x][y];
    bool an=1;
    seen[x][y] = 1;
    if(!((x+1==par.first)&&(y==par.second))){
        if(!apple(path , ans , seen , k , {x+1,y} , a , b ,pos ))an = 0;
    }
    if(!((x==par.first)&&(y+1==par.second))){
        if(!apple(path , ans , seen , k , {x,y+1} , a , b ,pos ))an = 0;
    }
    if(!((x-1==par.first)&&(y==par.second))){
        if(!apple(path , ans , seen , k , {x-1,y} , a , b ,pos ))an = 0;
    }
    if(!((x==par.first)&&(y-1==par.second))){
        if(!apple(path , ans , seen , k , {x,y-1} , a , b ,pos ))an = 0;
    }
    if((an)&&(k!=0)){
        ans[x][y] = 1;
        k--;
        return 1;
    }
    else return 0;

}   

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long a,b,k;cin>>a>>b>>k;
    vector<vector<bool>> path(a , vector<bool>(b,0));
    long long x,y;
    for(long long i=0 ; i<a ; i++){
        string s;cin>>s;
        for(long long j=0 ; j<b ; j++ ){
             if(s[j]=='.'){
                path[i][j] = 1;
                x= i ; y=j;
             }
        }
    }
    vector<vector<bool>> ans (a , vector<bool>(b , 0));
    vector<vector<bool>> seen (a , vector<bool> (b , 0));
    apple(path , ans , seen , k , {x,y} , a , b , {-1 , -1});
    for(long long i=0 ; i<a ; i++){
        for(long long j=0 ; j<b ; j++){
            if(path[i][j]){
                if(ans[i][j])cout<<"X";
                else cout<<".";
            }
            else cout<<"#";
        }
        cout<<endl;
    }
    

    

}   
