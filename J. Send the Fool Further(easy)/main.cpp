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
ll dfs(vector<vector<pair<ll,ll>>> tree , ll n , ll parent){
    ll ans=0;
    for(pair val:tree[n]){
        if(val.first==parent)continue;
        ans=max(ans , dfs ( tree , val.first , n )+val.second);
    }
    return ans;
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll n;cin>>n;
    vector<vector<pair<ll,ll>>> tree(n+1);
    for(ll i=1 ; i<n ; i++){
        ll a,b,c;cin>>a>>b>>c;
        tree[a].push_back({b,c});
        tree[b].push_back({a,c});
    }
    cout<<dfs(tree , 0 , -1);
    

}   
