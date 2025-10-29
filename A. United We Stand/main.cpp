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

bool apple(vector<long long> &vec , vector<long long> &emptyone){
    for(auto it =vec.begin() , )
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n;  i++)cin>>vec[i];
        vector<long long> odd , even;
        for(long long i=0 ; i<n; i++){
            if(vec[i]%2==0)even.push_back(vec[i]);
            else odd.push_back(vec[i]);
        }
        long long remodd=-1 , remev =-1;
        bool ans=1;
        if(odd.empty())if(!apple(even , odd)) ans=0;
        if(even.empty())if(!apple(odd , even)) ans=0;
        if(n<=1)ans=0;
        if(ans){
            cout<<odd.size()<<" "<<even.size()<<endl;
            for(long long val:odd)cout<<val<<" ";
            cout<<endl;
            for(long long val:even)cout<<val<<" ";
            cout<<endl;
            
        }
        else cout<<-1<<endl;
    }
    

}   
