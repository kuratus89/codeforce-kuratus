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
        vector<bool> vec(n);
        f(i,n){
            ll t;cin>>t;
            vec[i]=(t==1);
        }
        vector<pair<ll,ll>> dp(n , {0,0});
        dp[0]={vec[0] , 0};
        if(n>1)dp[1] = {vec[0]+vec[1] , vec[0]};
        else {
            cout<<vec[0]<<endl;
            continue;
        }
        for(ll i=2 ; i<n ; i++){
            dp[i].first = min(dp[i-2].second + vec[i]+vec[i-1] , dp[i-1].second+vec[i]);
            dp[i].second = min(dp[i-2].first , dp[i-1].first);
        }
        cout<<min(dp[n-1].first , dp[n-1].second)<<endl;
        

    }
    

}   
