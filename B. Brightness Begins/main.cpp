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
// ll apple(ll n){
//     ll low=0,high = min(n, (ll)3'000'000'000) ,mid;
//     while(low<high){
//         mid = (low+high)/2;
//         if(mid*mid==n)return mid;
//         if((mid*mid)<n)low=mid+1;
//         else high=mid-1;

//     }
//     return high;
// }
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll tt;cin>>tt;
    while(tt--){
        ll n;cin>>n;
        ll low=n , high=n*2 , mid;
        while(low<high){
            mid = (low+high)/2;
            ll ans = mid - (long long )sqrtl(mid);
            if(ans>=n)high=mid;
            else low=mid+1;
        }
        cout<<low<<endl;
    }
    

}   
