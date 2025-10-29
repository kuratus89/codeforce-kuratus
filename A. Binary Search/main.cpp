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
ll bin(vll &vec , ll n){
    ll s=vec.size()-1;
    ll a=0;
    ll b=s;
    while(a<=b){
        ll mid=a+((b-a)/2);
        if(n>vec[mid])a=mid+1;
        else if(n<vec[mid])b=mid-1;
        else return mid;
    }
    return -1;


}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll a,b;cin>>a>>b;
    vll va(a);
    f(i,a)cin>>va[i];
    while(b--){
        ll n;cin>>n;
        // cout<<bin(va,n)<<endl;
        if((bin(va,n))==-1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

        // auto it = lower_bound(va.begin(), va.end(), n);
        // if(it != va.end() && *it == n)
        //     cout << "YES\n";
        // else
        //     cout << "NO\n";
    }


}   
