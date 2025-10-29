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
        ll a,b;cin>>a>>b;
        ll kx,ky;cin>>kx>>ky;
        ll qx,qy;cin>>qx>>qy;
        vector<pair<ll,ll>> k = {
            {kx+a,ky+b}, {kx-a,ky+b}, {kx+a,ky-b}, {kx-a,ky-b},
            {kx+b,ky+a}, {kx-b,ky+a}, {kx+b,ky-a}, {kx-b,ky-a}
        };

        
        set<pair<ll,ll>> sk(k.begin(), k.end());
         vector<pair<ll,ll>> q = {
            {qx+a,qy+b}, {qx-a,qy+b}, {qx+a,qy-b}, {qx-a,qy-b},
            {qx+b,qy+a}, {qx-b,qy+a}, {qx+b,qy-a}, {qx-b,qy-a}
        };
        set<pair<ll,ll>> sq(q.begin(), q.end());
        ll ans=0;
        for(auto val:sq){
            auto temp=find(sk.begin(),sk.end(),val);
            if(temp!=sk.end())ans++;
        }
        cout<<ans<<endl;

    }
    

}   
