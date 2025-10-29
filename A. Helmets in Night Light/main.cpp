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
        ll k ;cin>>k;
        vector<pair<ll,ll>> vec(n);
        f(i,n)cin>>vec[i].second;
        f(i,n)cin>>vec[i].first;
        sorted(vec);
        ll ans = vec[0].first;
        ll l = vec[0].second;
        for(ll i=1 ; i< n ; i++){
            ll cs= vec[i].second;
            ll cost = vec[i].first;
            if(cost>=k)break;
            if()

        }
    }

}   
