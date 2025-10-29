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
    vi val(4,0);
    f(i,n)val[vec[i]-1]++;
    ll ans=val[3];
    if(val[2]>=val[0]){
        val[0]=0;
        ans+=val[2];
    }else{
        val[0]-=val[2];
        ans+=val[2];
    }
    ans+=(val[1]/2);
    val[1]=val[1]%2;
    ans+=(val[0]/4);
    val[0]%=4;
    if(val[0]>0){
        if(val[1]>=1){
            if(val[0]>2)ans+=2;
            else ans+=1;
        }else ans+=1;
    }else if(val[1]>0)ans+=1;
    cout<<ans;
    

}   
