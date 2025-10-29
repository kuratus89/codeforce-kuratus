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
        string s;cin>>s;
        ll n= s.size();
        ll one = 0; 
        ll zero = 0;
        for(char val : s){
            if(val=='0')zero++;
            else one ++;
        }
        ll ans=0;
        for(ll i=0 ; i<n ; i++){
            if(s[i]=='0'){
                if(one>0)one--;
                else {
                    ans= n-i;
                    break;
                }
            }
            else{
                if(zero>0)zero--;
                else {
                    ans= n-i;
                    break;
                }
            }
        }
        cout<<ans<<endl;
        
    }

}   
