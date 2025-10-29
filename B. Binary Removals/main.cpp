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
        long long n;
        string  s;cin>>s;
        n = s.size();
        long long z=0;
        bool ans=0;
        for(long long z=1 ; z<n ; z++){
            bool ano=1;
            for(long long i=1 ; i<z ; i++)if((s[i]=='1')&&(s[i-1]=='1'))ano=0;
            for(long long i=z+1 ; i<n ; i++)if((s[i]=='0')&&(s[i-1]=='0'))ano=0;
            if(ano){
                ans=1;
                break;
            }
        }
        
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    

}   
