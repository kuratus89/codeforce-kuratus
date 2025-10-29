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
bool apple(ll k , ll a , ll b , ll n){
    if(n<min(a,b))return false;
    ll ans=1;
    n-=min(a,b);
    ans+=n/a;
    ans+=n/b;
    return (ans>=k);
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll k,a,b;cin>>k>>a>>b;
    ll low=0 , high=2e18 , mid;
    while(low<high){
        mid = (low+high)/2;
        if(apple(k , a , b , mid))high=mid;
        else low=mid+1;
    }
    mid = (low+high)/2;
    cout<<mid;
    

}   
