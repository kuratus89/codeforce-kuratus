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

bool con(ll n){
    ll an=0;
    while(n>0){
        if((n%10)!=0)an++;
        n/=10;
    }
    if(an==1)return true;
    else return false;
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll m=999999;
    vll v(m+1);
    v[0]=0;
    for(int i=1 ; i<=m ; i++){
        v[i]+=v[i-1];
        if(con(i)) v[i]++;
    }
    ll tt; cin>>tt;
    while (tt--){
        ll n; cin>>n;
        cout<<v[n]<<endl;
    }
    

}   
