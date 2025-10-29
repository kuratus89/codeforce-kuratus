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
    ll n,mi,mx,dif;
    cin>>n>>mi>>mx>>dif;
    vll vec(n);
    f(i,n)cin>>vec[i];
    sorted(vec);
    ll cn=1LL<<n;
    ll ans=0;
    for(ll i=0 ; i<cn ; i++){
        vll an;
        for(ll j=0; j<n; j++){
            if(i&(1LL<<j))an.push_back(vec[j]);
            // if(i&(1<<j))cout<<vec[j]<<" ";
        }
        if(an.size()==0)continue;
        // cout<<endl;
        ll sum=0;
        ll nu=an.size();
        f(j,nu)sum+=an[j];
        sorted(an);
        // ll mn=(an[an.size()-1]-an[0]);
        

        if(((an[an.size()-1]-an[0])>=dif)&&(sum<=mx)&&(sum>=mi))ans++;
        // cout<<sum<<" "<<mn<<endl;
        
    }
    cout<<ans;

    

}   
