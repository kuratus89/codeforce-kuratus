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
ll apple(ll n){return ((n *(n+1))/2);}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll tt;cin>>tt;
    while(tt--){
        ll n , d , k;cin>>n>>d>>k;
        vll vec(n);
        f(i,n)cin>>vec[i];
        ll ans=0,cn=0;
        for(ll i=0 ; i<n ; i++){
            if(vec[i]<=k)cn++;
            else{
                if(cn-d+1>=0)ans+=apple(cn-d+1);
                cn=0;
            }
        }
        if(cn-d+1>=0)ans+=apple(cn-d+1);
        
        cout<<ans<<endl;
    }

}   
