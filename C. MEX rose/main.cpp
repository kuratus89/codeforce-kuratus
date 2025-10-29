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
        vll vec(n);
        f(i,n)cin>>vec[i];
        unordered_set<int> pre;
        ll cn=0;
        for (int x:vec) {
            if (x==k) cn++;
            if (x<k) pre.insert(x);
        }
        ll mis =k-pre.size();
        if (k==0) {
            cout<<cn<<endl;
        }
        else{
            cout<<max(mis,cn)<<endl;
        }
    }
    

}   
