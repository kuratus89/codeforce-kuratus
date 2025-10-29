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
    int tt; cin>>tt;
    while (tt--){
        int n; cin>>n;
        int e; cin>>e;
        if(n==1){
            int g; cin>>g;
            g=max(g  , (e-g)*2);
        
            cout<<g<<endl;
            continue;
        }
        vi vec(n);
        f(i,n) cin>>vec[i];
        int ans=vec[0];
        for(int i=1 ; i<n ; i++) ans=max(ans , vec[i]-vec[i-1]);
        ans=max(ans , (e - vec[n-1])*2);
        cout<<ans<<endl;
    }
    

}   
