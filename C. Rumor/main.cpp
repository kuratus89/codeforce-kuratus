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

long long apple(vector<long long> &vec,vector<vector<long long>> &poki,vector<bool> &seen , long long i){
    long long ans= vec[i-1];
    seen[i]=1;
    for(long long val:poki[i]){
        if(seen[val])continue;
        ans = min(ans , apple(vec , poki ,  seen , val));
    }
    return ans;
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long n,q;cin>>n>>q;
    vector<long long> vec(n);
    for(long long i=0 ; i<n ; i++)cin>>vec[i];
    vector<vector<long long>> poki(n+1);
    while(q--){
        long long a,b;cin>>a>>b;
        poki[a].push_back(b);
        poki[b].push_back(a);
    }
    vector<bool> seen(n+1);
    long long ans=0;
    for(long long i=1 ; i<=n ; i++){
        if(seen[i])continue;
        ans +=apple(vec ,poki , seen , i);
    }
    cout<<ans;
    

}   
