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
        string s;cin>>s;
        vll a;
        vll b;
        for(ll i=0 ; i<n ; i++){
            if(s[i]=='a')a.push_back(i);
            else b.push_back(i);
        }
        if((n<=2)||(a.empty())||(b.empty())){
            cout<<0<<endl;
            continue;
        }
        for(ll i=0 ; i<a.size() ; i++)a[i]-=i;
        for(ll i=0 ; i<b.size() ; i++)b[i]-=i;
        ll amed = a[a.size()/2];
        ll bmed = b[b.size()/2];
        for(ll i=0 ; i<a.size() ; i++) a[i]=abs(a[i]-amed);
        for(ll i=0 ; i<b.size() ; i++) b[i]=abs(b[i]-bmed);
        ll aans=0,bans=0;
        for(ll i=0 ; i<a.size() ; i++) aans+=a[i];
        for(ll i=0 ; i<b.size() ; i++) bans+=b[i];
        cout<<min(aans , bans)<<endl;
    }
    

}   
