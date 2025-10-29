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
ll apple(ll n,ll k){
    return (k/n)+1;
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll n;cin>>n;
    ll k;cin>>k;
    vll vec(n);
    f(i,n)cin>>vec[i];
    rsorted(vec);
    ll s=0 , l = 0;
    ll ans=0;
    while((s+l)<n){
        ll lef = n - (s+l);
        ll tem = (k + vec[l] - 1) / vec[l]; 
        if(tem<=lef){
            s++;
            l+=tem;
            ans++;
        }
        else break;

    }
    cout<<ans;
    

}   
