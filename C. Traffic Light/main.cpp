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
        ll n; cin>>n;
        char c;cin>>c;
        string s;cin>>s;
        if(c=='g'){
            cout<<0<<endl;
            continue;
        }
        s=s+s;
        vll vec(2*n);
        if(s[0]=='g')vec[0]=1;
        else vec[0]=0;
        for(ll i=1 ; i<(2*n) ; i++){
            if(s[i]=='g')vec[i]=vec[i-1]+1;
            else vec[i]=vec[i-1];
        }
        ll ans=0;
        for(ll i=0 ; i<(2*n) ; i++){
            if(s[i]==c){
                auto it = lower_bound(vec.begin() + i , vec.end() , vec[i]+1);
                if(it == vec.end())continue;
                ans = max ( ans  , (it - vec.begin() ) - i);
            }
        }
        cout<<ans<<endl;

    }

}   
