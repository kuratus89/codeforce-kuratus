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
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll n,k;cin>>n>>k;
    vll vec(n);
    f(i,n)cin>>vec[i];
    ll ans=0;
    for(ll i=1 ; i< n; i++)vec[i]+=vec[i-1];
    for(ll i=0 ; i<n ; i++){
        ll s=0;
        if(i!=0)s=vec[i-1];
        auto it = upper_bound(vec.begin()+i , vec.end() , k+s);
        auto it2 = lower_bound(vec.begin()+i , vec.end() , k+s);
        cout<<(it- vec.begin()-i)<<" ";
        cout<<(it2- vec.begin()-i)<<endl;
        ans = max(ans , ((it - vec.begin()-i)));
    }
    cout<<ans;
    

}   
