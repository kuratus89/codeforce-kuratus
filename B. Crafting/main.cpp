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
        vector<long long> a(n) , b(n);
        for(long long i=0 ; i<n ; i++)cin>>a[i];
        for(long long i=0 ; i< n  ; i++)cin>>b[i];
        bool an=0;
        bool out=0;
        long long ma = 0;
        long long mini=LLONG_MAX;
        for(long long i=0 ; i<n ; i++){
            long long dif = a[i] - b[i];
            if(dif<0){
                if(an){
                    // cout<<"NO"<<endl;
                    out=1;
                    break;
                }
                else{
                    
                    an = 1;
                }
                ma = dif;
            }
            else {
                mini = min(mini , dif);
            }
        }
        cout<<mini<<" "<<ma<<" ";
        if(out||(mini<ma))cout<<"NO";
        else cout<<"YES";
        cout<<endl;

        
        
    }
    

}   
