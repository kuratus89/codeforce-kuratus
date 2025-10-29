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
bool apple(pair<ll,ll> a , pair<ll,ll> b){
    if(a.first==b.first)return a.second < b.second;
    else return a.first > b.first;
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll tt; cin>>tt;
    while(tt--){
        ll n;cin>>n;
        ll k;cin>>k;
        vector<pair<ll,ll>> vec(n);
        f(i,n){cin>>vec[i].first;vec[i].second = i+1;}
        f(i,n){vec[i].first%=k;if(vec[i].first==0)vec[i].first=k;}
        sort(vec.begin() , vec.end() ,apple);
        
        f(i,n)cout<<vec[i].second<<" ";
        cout<<endl;

        
        
        
    }
    

}   
