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
    ll tt;cin>>tt;
    while(tt--){
        ll n,start,time;cin>>n>>start>>time;
        vector<bool> vec(n);
        string s;cin>>s;
        for(int i=0 ; i<n;  i++){
            if(s[i]=='L')vec[i]=0;
            else vec[i]=1;
        }
        ll pos=start;
        ll com=0;
        ll ans=0;
        while(time--){
            
            if(com<n){
                if(vec[com])pos++;
                else pos--;
                com++;
            }
            if(pos==0){
                ans++;
                com=0;
                break;
            }
        }
        ll an=-1;
        pos=0;
        for(ll i=0 ; i<n ; i++){
            if(vec[i])pos++;
            else pos--;
            if(pos==0){
                an=i;
            }
        }
        if(an!=-1)ans+=time/an;
        cout<<ans<<endl;


    }
    

}   
