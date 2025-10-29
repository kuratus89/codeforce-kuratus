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
    long long n;cin>>n;
    vector<vector<pair<long long ,long long >>> dp(n , vector<pair<long long ,long long >> (10));
    dp[0] = {{1,1},{1,1},{1,1},{1,1},{1,1},{1,1},{1,1},{1,1},{1,1},{1,1}};
    for(long long i=1 ; i<n ; i++){
        for(long long j=0 ; j<10 ; j++){
            long long inc=0 ,dec=0;
            for(long long x=0 ; x<j ; x++){
                dec+=dp[i-1][x].first;
            }
            for(long long x=j+1 ; x<10 ; x++){
                inc+=dp[i-1][x].second;
            }
            dp[i][j]={inc,dec};
        }
    }
    long long ans=0;
    for(pair<long long,long long > val:dp[n-1])ans+=val.second+val.first;
    cout<<ans;
    
    

}   
