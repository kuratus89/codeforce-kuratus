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
        vll eve;
        deque<ll> odd;
        f(i,n){
            ll temp;cin>>temp;
            if(temp%2==0)eve.push_back(temp);
            else odd.push_back(temp);
        }
        if(odd.empty()){
            cout<<0<<endl;
            continue;
        }
        sorted(odd);
        ll ans=0;
        ans+=odd.back();
        odd.pop_back();
        for(ll val:eve)ans+=val;
        while(!odd.empty()){
            odd.pop_front();
            if(odd.empty())break;
            ans+=odd.back();
            odd.pop_back();
        }
        cout<<ans<<endl;
        

    }
    

}   
