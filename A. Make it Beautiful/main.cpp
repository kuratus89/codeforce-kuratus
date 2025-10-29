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
    ll tt; cin>>tt;
    while (tt--){
        ll n; cin>>n;
        vll vec(n);
        f(i,n)cin>>vec[i];
        set<ll> vel;
        f(i,n)vel.insert(vec[i]);
        if(vel.size()==1)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            ll m=0;
            ll mv=0;

            ll s=0;
            ll sv=INT_MAX;
            f(i,n){
                if(vec[i]<sv){
                    sv=vec[i];
                    s=i;
                }
                if(vec[i]>mv){
                    mv=vec[i];
                    m=i;
                }
            }
            swap(vec[0],vec[m]);
            swap(vec[1],vec[s]);
            f(i,n)cout<<vec[i]<<" ";
            cout<<endl;
        }
    }

}   
