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
    int n,k;cin>>n>>k;
    vll vec(n);
    f(i,n)cin>>vec[i];
    vector<set<int>> dp(k+1);
    dp[0]={0};
    
    for(ll val:vec){
        for(ll i=0 ; i<=k ; i++){
            if(dp[i].empty())continue;
            if(i+val<=k){
                dp[i+val].insert(dp[i].begin() , dp[i].end());
                dp[i+val].insert(val);
                dp[i+val].insert(i+val);
            }

        }
    }
    cout<<dp[k].size()<<endl;
    for(ll val:dp[k])cout<<val<<" ";

    

}   
