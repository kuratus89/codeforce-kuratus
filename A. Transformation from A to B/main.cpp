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
    ll a,b;cin>>a>>b;
    vll vec;
    while(b>=a){
        vec.push_back(b);
        if(b==a){
            reverse(vec.begin() , vec.end());
            cout<<"YES"<<endl;
            cout<<vec.size()<<endl;
            for(ll val:vec)cout<<val<<" ";
            return 0;
        }
        if(b%10==1)b/=10;
        else if(b%2==0)b/=2;
        else break;
        
        
    }
    cout<<"NO";

}   
