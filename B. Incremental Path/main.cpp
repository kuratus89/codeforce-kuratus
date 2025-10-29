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
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        vll vec(k);
        f(i,n)cin>>vec[i];
        vector<bool> op(n);
        for(ll i=0 ; i<n ; i++)op[i]=(s[i]=='A');
        vector<bool> ans(2e9 , 0);
        for(ll val:vec)ans[val]=1;
        for(ll i =0 ; i<n ; i++ ){
            ll pos =1;
            for(ll j=0 ; j<=i ; i++){
                pos++;
                if(!op[i])while(!ans[pos])pos++;
                ans[pos]=1;
            }
        }
        for(ll i=0 ; i<ans.size() ; i++)if(ans[i])cout<<i<<" ";
        cout<<endl;
    }
    

}   
