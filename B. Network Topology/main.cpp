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

bool bus(vector<vector<ll>> &tree , ll n , vector<bool> &seen , ll parent){
    if()
    seen[n]=1;
    for(ll val:tree[n]){
        
    }


}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll n,m;cin>>n>>m;
    vector<vector<ll>> tree(n+1);
    while(m--){
        ll a,b;cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    for(ll i=0 ; i<=n ; i++){
        cout<<i<<"->";
        for(ll val:tree[i])cout<<val<<" ";
        cout<<endl;
    }


    

}   
