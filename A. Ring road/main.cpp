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
ll ds1(vector<vector<pair<ll,ll>>> &tree , ll n , ll root , ll parent){
    if ( n== root)return 0;
    ll ans=0;
    for(pair val:tree[n]){
        if(val.first==parent)continue;
        ans+=val.second;
        ans+=ds1(tree , val.first , root , n);
    }
    return ans;
    
}

ll dfs(vector<vector<pair<ll,ll>>> &tree , ll n ){
    ll ans=LLONG_MAX;
    for(pair val:tree[n]){
        ll ono = val.second;
        ono+=ds1(tree , val.first , n , n);
        ans=min(ans , ono);
    }
    return ans;
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll n;cin>>n;
    vector<vector<pair<ll,ll>>> tree(n+1);
    for(ll i=0 ; i<n ;i++){
        ll a,b,c;cin>>a>>b>>c;
        tree[a].push_back({b,0});
        tree[b].push_back({a,c});
    }
    ll ans=0;
    for(ll i=1 ; i<=n ; i++)ans=max(ans , dfs(tree , i));
    cout<<ans;

}   
