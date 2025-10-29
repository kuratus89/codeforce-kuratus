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
        vll vec(n);
        f(i,n)cin>>vec[i];
        ll z=0,mi=0;
        f(i,n){
            if(vec[i]==0)z++;
            else if(vec[i]==-1)mi++;
        }
        ll ans=0;
        ans+=z;
        if(mi%2!=0)ans+=2;
        // cout<<z<<" "<<mi<<endl;
        cout<<ans<<endl;
    }
    

}   
