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
bool apple(vll &vec , ll n , ll k){
    ll a=vec[0];
    ll ans=1;
    for(ll val:vec){
        if((val - a)>=n){
            ans++;
            a=val;
        }
    }
    return (ans>=k);
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll n,k;cin>>n>>k;
    vll vec(n);
    f(i,n)cin>>vec[i];

    ll low=0 , hig = *(vec.end()-1) , mid,ans;
    while(low<hig){
        mid = (low+hig)/2;
        if(apple(vec , mid , k)){
            low=mid+1;
            ans=mid;
        }
        else {
            hig=mid-1;
        }
    }
    cout<<ans;
    

}   
