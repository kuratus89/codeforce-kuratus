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
    ll tt;
    cin>>tt;

    while (tt--){
        ll n; cin>>n;
        ll k ; cin>>k;
        ll x; cin>>x;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            f(i,n)cout<<1<<" ";
            cout<<endl;
        }
        else if ((k==2 && (n%2)==0) || ((x!=2 && k>2)&& (n%2)==0)){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            f(i,(n/2)) cout<<2<<" ";
            cout<<endl;
        }
        else if (k==2 && (n%2)!=0) cout<<"NO"<<endl;
        else if (k==1)  cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            cout<<(1+((n-3)/2))<<endl;
            cout<<3<<" ";
            f(i,(n-3)/2)cout<<"2"<<" ";
            cout<<endl;
        }
    }

    

}   
