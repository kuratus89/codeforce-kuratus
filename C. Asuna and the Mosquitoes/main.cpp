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
        vll vec(n);
        f(i,n)cin>>vec[i];
        priority_queue<long long> odd;
        priority_queue<long long> even;
        for(long long i=0 ; i<n ; i++){
            if(vec[i]%2==0)even.push(vec[i]);
            else odd.push(vec[i]);
        }
        if((odd.empty())||(even.empty())){
            ll ma=0;
            f(i,n)ma=max(ma,vec[i]);
            cout<<ma<<endl;
            continue;

        }
        ll ans = odd.top();
        odd.pop();
        while((!odd.empty())&&(!even.empty())){
            if(ans%2==0){
                if(even.empty()){
                    if(odd.top()!=1)even.push(1);
                    odd
                }

                
                odd.pop();
            }
            else {
                if(even.top()!=1)odd.push(even.top()-1);
                even.pop();
            }
            ans++;
        }
        if((ans%2==0)&&(!odd.empty()))ans+=odd.top();
        if((ans%2!=0)&&(!even.empty()))ans+=even.top();
        cout<<ans<<endl;
    }
    

}   
