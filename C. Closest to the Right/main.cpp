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
    long long n;cin>>n;
    long long k;cin>>k;
    vector<long long > vec(n);
    for(int i=0; i<n ; i++)cin>>vec[i];
    while(k--){
        long long i;cin>>i;
        auto it =lower_bound(vec.begin(),vec.end(),i);
        // cout<<*it<<endl;
        cout<<(it-vec.begin()+1)<<endl;
        // if((*(it-1)==i)&&(it != vec.begin()))cout<<(it-vec.begin())<<endl;
        // else cout<<(it-vec.begin()+1)<<endl;

    }

}   
