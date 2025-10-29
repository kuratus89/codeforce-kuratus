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

bool bin(ll n , ll mid){
    ll ans= mid-1;
    ans+=2;
    ans*=n;
    ans/=2;
    return n<ans;
}

ll apple(ll n ){
    ll low=0,high=1e9 , mid ,ans;
    while(low<=high){
        mid = (low+high)/2;
        if(bin(n , mid)){
            low = mid+1;
            ans=mid;
        }
        else high=mid-1;

    }
    return ans;
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll tt;cin>>tt;
    while(tt--){
        ll a,b;cin>>a>>b;
        cout<<apple(a)<<endl;

    }
    

}   
