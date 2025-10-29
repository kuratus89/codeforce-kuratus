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
    long long n ,k; cin>>n>>k;
    vector<long long> vec(n);
    vector<bool> seen(n,0);
    for(long long i=0 ; i<(n-1) ; i++)cin>>vec[i];
    long long in=1;
    vec[n-1] = 1;
    while(in<=n){
        seen[in-1]=1;
        in  += vec[in-1];
    }
    if(seen[k-1])cout<<"YES";
    else cout<<"NO";
    

}   
