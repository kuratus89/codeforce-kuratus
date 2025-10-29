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
    ll n;cin>>n;
    vll vec(n);
    f(i,n)cin>>vec[i];
    ll con=(1<<n);
    vll val;
    for(int i=0 ; i<con ;i++){
        ll sub=0;
        for(int j=0 ; j<n ;j++){
            if(!(i&(1<<j)))sub+=(vec[j]);
            else sub-=vec[j];
        }
        val.push_back(sub);

    }
        bool ans=false;
        for(auto a:val)if((a==0)||((a%360)==0))ans=true;
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    

}   
