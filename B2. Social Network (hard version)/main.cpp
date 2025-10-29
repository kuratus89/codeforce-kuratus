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
    ll k;cin>>k;
    vll vec(n);
    f(i,n)cin>>vec[i];
    deque<ll> dl;
    set<ll> vl;
    f(i,n){
        if(vl.count(vec[i])!=0)continue;
        dl.push_front(vec[i]);
        vl.insert(vec[i]);
        if(vl.size()>k){
            vl.erase(dl.back());
            dl.pop_back();
        }

    }
    cout<<dl.size()<<endl;
    for(auto val:dl)cout<<val<<" ";



}   
