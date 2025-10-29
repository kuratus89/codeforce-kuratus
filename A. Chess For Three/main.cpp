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
    ll tt; cin>>tt;
    while(tt--){
        ll a; cin>>a;
        ll b; cin>>b;
        ll c; cin>>c;
        ll ans=0;
        if(a<b){
            ans+=a;
            b-=a;
            a=0;
        }else {
            ans+=b;
            a-=b;
            b=0;
        }
        if(b<c){
            ans+=b;
            c-=b;
            b=0;
        }else {
            ans+=c;
            b-=c;
            c=0;
        }
        if(a<c){
            ans+=a;
            c-=a;
            a=0;
        }else {
            ans+=c;
            a-=c;
            c=0;
        }
        if(a%2==0)a=0;
        if(b%2==0)b=0;
        if(c%2==0)c=0;
        if((a==0)&&(b==0)&&(c==0))cout<<ans;
        else cout<<-1;
        cout<<endl;
    }
    

}   
