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
    ll n,q,k;cin>>n>>q>>k;
    vll vec(n);
    f(i,n)cin>>vec[i];
    vll ans(n);
    // ans[0] = vec[0]-1;
    for(ll i=1 ; i<(n-1) ; i++)ans[i] = ans[i-1] -vec[i-1]-2+vec[i+1];
    // ans[n-1]=(k-vec[n-1])+(vec[n-1] - vec[n-2] - 1);
    while(q--){
        ll a,b;cin>>a>>b;
        if(a==b){
            cout<<k-1<<endl;
            continue;
        }
        a--;b--;
        ll an= ans[b - 1] - ans[a] + (ans[a + 1] - 2) + (k - ans[b - 1] - 1);
        // ll an=0;
        // an+= ans[a+1]-2;
        // an+= k-ans[b-1]-1;
        // a++;b--;
        // if(a<b)an+= ans[a] - ans[b-1];
        cout<<an<<endl;

    }
    

}   
