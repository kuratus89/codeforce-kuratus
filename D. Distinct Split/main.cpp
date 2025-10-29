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
        ll n;cin>>n;
        string s;cin>>s;
        ll ans=0;
        vll pre(n);
        vll suf(n);
        vector<bool> vecpre(26,0);
        vector<bool> vecsuf(26,0);
        pre[0]=1;
        suf[n-1]=1;
        vecpre[s[0]-'a'] = 1;
        vecsuf[s[n-1]-'a'] = 1;
        for(ll i=1 ; i<n ; i++){
            if(vecpre[s[i]-'a'])pre[i]=pre[i-1];
            else{
                pre[i]=pre[i-1]+1;
                vecpre[s[i]-'a']=1;
            }
        }
        for(ll i=n-2 ; i>=0 ; i--){
            if(vecsuf[s[i]-'a'])suf[i]=suf[i+1];
            else{
                 suf[i]=suf[i+1]+1;
                 vecsuf[s[i]-'a']=1;
            }
        }
        for(ll i=0 ; i<n-1 ;i++)ans= max(ans , pre[i]+suf[i+1]);
        cout<<ans<<endl;
        
        

    }
    

}   
