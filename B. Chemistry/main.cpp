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
        ll k;cin>>k;
        string s;cin>>s;
        if((n-k)==1){
            cout<<"YES"<<endl;
            continue;
        }
        ll vr=n-k;
        vll alva(26,0);
        f(i,n)alva[s[i]-'a']++;
        ll od=0;
        f(i,26)if((alva[i]%2)!=0)od++;
        bool ans=0;
        if((od-k)<=(vr%2))ans=true;
        
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    

}   
