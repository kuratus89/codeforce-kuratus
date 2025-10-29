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
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        long long mini =0 , ma=0;
        for(long long i=0 ; i<n; i++){
            if(vec[mini]>vec[i])mini=i;
            if(vec[ma]<=vec[i])ma=i;
        }
        if(n==1){
            cout<<0<<endl;

            continue;
        }
        long long ans=0;
        if(ma<n-1)ans = max(ans, (vec[ma] - vec[ma+1]));
        if(mini>0)ans = max(ans, (vec[mini-1] - vec[mini]));
        if(n-1!=mini)ans = max(ans , (vec[n-1] - vec[mini]));
        if(0!=ma)ans = max(ans , (vec[ma] - vec[0]));
        for(long long i=0 ; i<n-1 ; i++)ans= max(ans , (vec[i] - vec[i+1]));
        for(long long i=1 ; i<n ; i++)ans = max(ans , (vec[i-1] - vec[i]));

        cout<<ans<<endl;
    }
    

}   
