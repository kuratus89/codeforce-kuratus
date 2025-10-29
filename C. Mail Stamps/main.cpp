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
void apple(vector<vector<ll>> &tree , ll par , ll n  , map<ll,ll> &mao , map<ll,ll> &moo){
    for(ll val:tree[n]){
        if(val==par)continue;
        apple(tree , n , val , mao , moo);
    }
    cout<<moo[n]<<" ";
    return ;
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll n;cin>>n;
    vector<vector<ll>> tree(1+n);
    map<ll,ll> mao;
    map<ll,ll> moo;
    ll cn=0;
    for(ll i=0 ; i<n ; i++){
        ll a,b;cin>>a>>b;
        if(mao.find(a) == mao.end()){
            mao[a]=cn;
            moo[cn]=a;
            cn++;
        }

        if(mao.find(b) == mao.end()){
            mao[b]=cn;
            moo[cn]=b;
            cn++;
        }
    
        tree[mao[a]].push_back(mao[b]);
        tree[mao[b]].push_back(mao[a]);
    }
    ll str;
    for(ll i=0 ; i <cn ; i++)if(tree[i].size()==1)str=i;
    apple(tree , -1 ,str , mao , moo);


    

}   
