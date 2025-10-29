#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll= long long ;
#define f(i,n) for(long long i=0;i<n;i++)
#define sorted(x) sort(x.begin(),x.end());
#define rsorted(x) sort(x.rbegin(),x.rend());
#define rev(x) reverse(x.begin(),x.end());
typedef vector<long long > vi;
typedef vector<long long > vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<long long , long long > pii;
typedef vector<pair<long long , long long >> vpii;
typedef unordered_map<long long , long long > umap_ii;
typedef unordered_map<ll, ll> umap_ll;
typedef unordered_map<string, long long > umap_si;
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vll vec(n);
        for(long long i=0;i<n;i++)cin>>vec[i];
        
        vll res(n);
        vll pos(n,-1);
        long long val=1;
        for(long long i=0;i<n;i++){
            long long req;
            if(i==0)req=vec[0];
            else req=vec[i]-vec[i-1];
            long long npos=i-req;
            if(npos>=0&&npos<n&&pos[npos]!=-1)res[i]=pos[npos];
            else res[i]=val++;
            pos[i]=res[i];
        }
        for(long long i=0;i<n;i++){
            cout<<res[i];
            if(i<n-1)cout<<" ";
        }
        cout<<endl;
    }
}