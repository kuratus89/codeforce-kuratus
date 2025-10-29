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

ll dfs(vector<vector<long long >> &tree , ll n ,ll cons, ll m , vll &cat , ll parent ){
    if(cat[n-1])cons++;
    else cons=0;
    if(cons>m)return 0;
    ll ans=0;
    bool isempty = true;
    // if(tree[n].empty())ans=1;
    for(ll val:tree[n]){
        if(val==parent)continue;
        isempty = 0;
        ans+=dfs(tree , val ,cons, m ,cat , n);
    }
    if(isempty)return 1;
    return ans;
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll n,m;cin>>n>>m;
    vll cat(n);
    f(i,n)cin>>cat[i];
    vector<vector<long long >> tree(n+1);
    for(ll i=1 ; i<n ;i++){
        ll a,b;cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    // vll seen(n+1);
    cout<<dfs(tree , 1 ,0, m , cat , -1 );

    

}   
