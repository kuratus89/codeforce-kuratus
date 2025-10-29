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
        vll va(n);
        vll vb(n);
        f(i,n)cin>>va[i];
        f(i,n)cin>>vb[i];
        unordered_map<ll,ll> a;
        unordered_map<ll,ll> b;
        pair<ll,ll> tempa={va[0],0};
        pair<ll,ll> tempb={vb[0],0};
        for(ll i=0 ; i< n ; i++){
            if(va[i]==tempa.first)tempa.second++;
            else {
                a[tempa.first]=max(a[tempa.first] , tempa.second);
                tempa = {va[i] , 1};
            }
        }
        a[tempa.first]=max(a[tempa.first] , tempa.second);
        for(ll i=0 ; i< n ; i++){
            if(vb[i]==tempb.first)tempb.second++;
            else {
                b[tempb.first]=max(b[tempb.first] , tempb.second);
                tempb = {vb[i] , 1};
            }
        }
        b[tempb.first]=max(b[tempb.first] , tempb.second);
        ll ans=0;
        for(ll i=1 ; i<=(2*n) ; i++)ans=max(ans , (a[i]+b[i]));
        cout<<ans<<endl;
        
        
    }
    

}   
