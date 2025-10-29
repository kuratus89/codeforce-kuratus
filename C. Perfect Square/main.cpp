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

ll apple(long long i , long long j , long long n , vector<string> &vec){
    char a = vec[i][j];
    char b = vec[j][n-i-1];
    char c = vec[n-i-1][n-j-1];
    char d = vec[n-j-1][i];
    char ma = max({a,b,c,d});
    ll ans=0;
    ans+=(ma-a);
    ans+=(ma-b);
    ans+=(ma-c);
    ans+=(ma-d);
    return ans;
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll tt; cin>>tt;
    while(tt--){
        ll n;cin>>n;
        vector<string> vec(n);
        f(i,n)cin>>vec[i];
        long long ans=0;
        for(long long i =0 ; i<n ; i++){
            for(long long j=0 ; j<n ; j++){
                ans+=apple(i , j , n , vec);
            }
        }
        ans/=4;
        cout<<ans<<endl;
    }
    

}   
