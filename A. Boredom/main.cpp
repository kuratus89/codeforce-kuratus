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
    ll n;cin>>n;
    vll vec(1e5+5,0);
    f(i,n){ll temp;cin>>temp;vec[temp]++;}
    vll dp(1e5+5);
    dp[0]=0;
    dp[1]=vec[1];
    for(ll i=2 ; i<=1e5 ; i++){
        ll a = dp[i-2] + (vec[i]*i);
        ll b = dp[i-1];
        dp[i] = max(a,b);
    }
    cout<<dp[1e5];
    

}   
