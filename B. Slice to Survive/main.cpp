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
        long long m,n,x,y;cin>>m>>n>>x>>y;
        long long i=0 ,j=0;
        long long ans=0;
        while((m-i>0)&&(n-j>0)){
            long long left = x-j , right = m-x;
            long long top = y - i , bottom = n - y;
            if((left>=right)&&(left>=top)&&(left>=bottom)){
                j = y;
            }
            else if((right>=top)&&(right>=bottom)){
                n = y;
            }
            else if(top>=bottom){
                i = x;
            }
            else {
                m = x;
            }
            x = (m-i)/2;
            y = (n-j)/2;
            ans++;

        }
        ans+=2;
        cout<<ans<<endl;

    }
    

}   
