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
    ll n;cin>>n;
    vector<long long > vec(n);
    for(int i=0 ;i<n; i++)cin>>vec[i];
    sort(vec.begin(),vec.end());
    long long q;cin>>q;
    while(q--){

        long long a;cin>>a;
        long long b;cin>>b;
        auto it1 = lower_bound(vec.begin(),vec.end(),a);
        auto it2 = upper_bound(vec.begin(),vec.end(),b);
        long long ans=it2-it1;
        cout<<ans<<" ";
        
    }
    

    

}   
