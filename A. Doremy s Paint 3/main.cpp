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
    int tt; cin>>tt;
    while (tt--){
        int n; cin>>n;
        vi vec(n);
        set<int > se;
        f(i , n)cin>>vec[i];
        f(i,n)se.insert(vec[i]);
        
        if((se.size()>2))cout<<"NO"<<endl;
        else if (se.size()==2){
            // for(auto val:se)cout<<val<<" ";
            // cout<<endl;
            int a = count(vec.begin(), vec.end(),*se.begin() );
            int b = count(vec.begin(), vec.end(),*next(se.begin()) );
            // cout<<*se.begin()<<" "<<*next(se.begin())<<endl;
            if(((a==n/2)||(b==n/2))||((b==0)||(a==0)))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            
        }else cout<<"YES"<<endl;
    }
    

}   
