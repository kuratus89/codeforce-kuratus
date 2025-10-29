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
    ll tt;cin>>tt;
    while(tt--){
        ll n;cin>>n;
        ll k;cin>>k;
        vll vec(n);
        f(i,n)cin>>vec[i];
        ll ans=LLONG_MAX;
            f(i,n)if(vec[i]%k==0)ans=0;
            f(i,n)ans=min(ans, (k - (vec[i]%k)));
        
        if(k==4){
            ll eve=0;
            f(i,n)if(vec[i]%2==0)eve++;
            if(eve==0) ans= min(ans , 2ll);
            else if(eve==1)ans = min (ans , 1ll);
            else if(eve>=2) ans = min (ans , 0ll);
        }
        cout<<ans<<endl;
    }
    

}   
