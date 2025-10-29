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

bool apple(vector<pair<ll,ll>> &vec , ll n , ll k){
    __int128 banana =k;
    for(pair<ll,ll> val:vec){
        __int128 need = (__int128)val.first*n;
        if(need>val.second){
            banana -= (need - (__int128)val.second);
            if(banana<0)return 0;
        }
    }
    return 1;
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll n,k;cin>>n>>k;
    vector<pair<ll,ll>> vec(n);
    f(i,n)cin>>vec[i].first;
    f(i,n)cin>>vec[i].second;
    ll low=0 , high = 1e18 , mid , ans=0;
    while(low<=high){
        mid = (low+high)/2;
        if(apple(vec , mid , k)){
            low = mid+1;
            ans= mid;
        }
        else high = mid-1;
    }
    cout<<ans;

}   
