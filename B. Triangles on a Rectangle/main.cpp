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
        long long a,b;cin>>a>>b;
        pair<long long , long long> top = {LLONG_MAX , 0};
        pair<long long , long long> bottom = {LLONG_MAX , 0};
        pair<long long , long long> left = {LLONG_MAX , 0};
        pair<long long , long long> right = {LLONG_MAX , 0};
        long long to;cin>>to;
        while(to--){
            long long temp;cin>>temp;
            top.first = min(top.first , temp);
            top.second = max(top.second, temp);
        }
        long long bo;cin>>bo;
        while(bo--){
            long long temp;cin>>temp;
            bottom.first = min(bottom.first , temp);
            bottom.second = max(bottom.second, temp);
        } 
        long long le;cin>>le;
        while(le--){
            long long temp;cin>>temp;
            left.first = min(left.first , temp);
            left.second = max(left.second, temp);
        } 
        long long re;cin>>re;
        while(re--){
            long long temp;cin>>temp;
            right.first = min(right.first , temp);
            right.second = max(right.second, temp);
        }
        long long ans=0;
        ans = max(ans , ((top.second-top.first)*b));
        
        ans = max(ans , ((bottom.second-bottom.first)*b));
        
        ans = max(ans , ((left.second-left.first)*a));
        
        ans = max(ans , ((right.second-right.first)*a));
        cout<<ans<<endl;
    }   
    

}   
