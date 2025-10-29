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
    vector<int> vec(n);
    f(i,n)cin>>vec[i];
    map<int , int> dp;
    
    pair<int , int> ano={0,0};
    for(int i=0 ; i<n ; i++){
        // for(int val:vec)dp[val]=dp[val-1]+1;
        dp[vec[i]]=max(dp[vec[i]-1]+1 , dp[vec[i]]);
        if(dp[vec[i]]>ano.second){
            ano.second=dp[vec[i]];
            ano.first = i;
        }
    }
    cout<<ano.second<<endl;
    vector<int> ans;
    ans.push_back(ano.first+1);
    int cn=vec[ano.first];
    for(int i=ano.first ; i>=0 ; i--){
        if(vec[i]+1==cn){
            ans.push_back(i+1);
            cn--;
        }
    }
    sorted(ans);
    for(int val:ans)cout<<val<<" ";
   
    

    

}   
