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
        long long n,k;cin>>n>>k;
        vector<long long> a(n) , b(n);
        for(long long i=0 ; i<n ; i++)cin>>a[i];
        for(long long i=0 ; i< n ; i++)cin>>b[i];
        long long ma =0;
        long long sm=LLONG_MAX;
        long long in=0;
        bool is=0;
        for(long long i=0 ; i<n ; i++){
            ma = max(ma , a[i]);
            sm = min(sm , a[i]);
            if(b[i]!=-1){
                is = 1;
                in = i;
            }
        }
        if(!is){
            cout<<(k - (ma - sm)+1)<<endl;
            continue;
        }
        bool ans=1;
        long long val = a[in]+b[in];
        for(long long i=0 ; i< n ; i++){
            if(b[i]==-1){
                long long wn = val - a[i];
                if((wn>k)||(wn<0))ans = 0;
                continue;
            }
            if(val!=(a[i]+b[i]))ans=0;
        }
        if(ans)cout<<1;
        else cout<<0;
        cout<<endl;


    }
    

}   
