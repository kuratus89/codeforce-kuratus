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
ll apple(vll &vec , ll n){
    ll low=0 , high=vec.size() , mid;
    while(low<high){
        mid = (low+high)/2;
        if(vec[mid]<=n)low=mid+1;
        else high=mid;
    }
    return low;
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll a;cin>>a;
    ll b;cin>>b;
    vll avec(a);
    vll bvec(b);
    f(i,a)cin>>avec[i];
    f(i,b)cin>>bvec[i];
    sorted(avec);
    for(ll val:bvec){
        // auto it = upper_bound(avec.begin() , avec.end() , val);
        // cout<<it-avec.begin()<<" ";
        cout<<apple(avec , val)<<" ";
    }



    
    

}   
