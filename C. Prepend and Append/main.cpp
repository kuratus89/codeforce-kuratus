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
    ll tt ; cin>>tt;
    while (tt--){
        ll n; cin>>n;
        string ss; cin>>ss;
        ll s=0;

        while((s<n) &&(n>=0)&& (((ss[s]=='1')&&(ss[(n-s)-1]=='0'))|| ((ss[s]=='0')&&(ss[(n-s)-1]=='1')))) s++;
        if ((s!='0')&&(s!=n)) cout<<ss.size()-(s*2)<<endl;
        else cout<<0<<endl;
    }

    

}   
