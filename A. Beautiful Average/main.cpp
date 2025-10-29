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
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        long long ans=0;
        vector<long long > vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        for(long long i=1 ; i<n;  i++)vec[i]+=vec[i-1];
        for(long long i=0 ; i<n ; i++){
            for(long long j=0 ; j<=i ; j++){
                if(j==0)ans = max(ans , vec[i]/(i+1));
                else ans = max(ans , (vec[i] - vec[j-1])/((i+1)-(j)));
            }
        }
        cout<<ans<<endl;
    }
    

}   
