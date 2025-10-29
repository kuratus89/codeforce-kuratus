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
    long long tt;cin>>tt;
    while(tt--){
        long long a,b,c;cin>>a>>b>>c;
        long long ans;
        // if ((a &b) != (a& (b & 1LL))) ans=0;
        // if ((b&c) != (b &(c & 1LL))) ans=0;
        // if ((a &c) != (a & (c & 1LL))) ans=0;
        if(((a&b)==(b&c))&&((c&b)==(a&c))&&(a&b)==(a&c))ans=1;
        else ans=0;
        // if((a==0)||(b==0)||(c==0))ans=1;
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

}   
