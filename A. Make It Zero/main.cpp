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
        // bool alz=true;
        // f(i,n)if(vec[i]!=0)alz=false;
        // if(alz){
        //     cout<<0<<endl;
        //     continue;
        // }
        // bool z=false;
        // f(i,n)if(vec[i]==0)z=true;
        // if(z){
        //     cout<<1<<" "<<endl<<1<<" "<<n<<endl;
        //     continue;
        // }
        
        if(n%2==0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else {
            cout<<4<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
    

}   
