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

long long apple(vector<vector<long long > > &vec , vector<vector<bool>> &seen , long long i , long long j , long long n , long long m , long long x){
    if((i<0)||(j<0)||(i>=n)||(j>=m))return 0;
    if(seen[i][j])return 0;
    if(vec[i][j]!=x)return 0;
    seen[i][j]=1;    
    long long ans=1;
    ans += apple(vec , seen , i+1 , j , n , m , x);
    ans += apple(vec , seen , i , j+1 , n , m , x);
    ans += apple(vec , seen , i-1 , j , n , m , x);
    ans += apple(vec , seen , i , j-1 , n , m , x);
    return ans;
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long tt;cin>>tt;
    while(tt--){
        long long n,m;cin>>n>>m;
        vector<vector<long long>> vec(n , vector<long long > (m));
        for(long long i=0 ; i<n ;i++)for(long long j=0 ; j<m ; j++)cin>>vec[i][j];
        map<long long , long long > ma;
        vector<vector<bool>> seen(n , vector<bool> (m,0));
        for(long long i=0 ; i<n ; i++){
            for(long long j=0 ; j<m ; j++){
                if(seen[i][j])continue;
                long long add=apple(vec , seen ,i , j, n , m , vec[i][j]);
                add = min(add , (long long) 2);
                ma[vec[i][j]]= max(add , ma[vec[i][j]]);
            }
        }
        long long maa=0;
        long long ans=0;
        for(auto val:ma){
            ans+=val.second;
            maa= max(maa , val.second);
        }
        ans-=maa;
        cout<<ans;
        // cout<<"=>";
        // cout<<ma[1]<<" "<<ma[2]<<" "<<ma[3];
        cout<<endl;
    }
    

}   
