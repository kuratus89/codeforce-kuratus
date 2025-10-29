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
    string  s;cin>>s;
    ll o=0;
    ll z=0;
    ll mo=0;
    ll mz=0;
    for(ll i=0 ; i<(s.length()) ; i++){
        if(s[i]=='0'){
            z++;
            o=0;
        }else {
            z=0;
            o++;
        }
        mo=max(mo,o);
        mz=max(mz,z);
    }
    if((mo>=7)||(mz>=7))cout<<"YES";
    else cout<<"NO";
    

}   
