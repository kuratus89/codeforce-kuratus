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

void apple(vector<set<long long>> &vec,vector<vector<long long>> &gr , vector<vector<long long> >&br , vector<bool> &seen  ,long long i){
    seen[i]=1;
    
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long n,k;cin>>n>>k;
    vector<set<long long>> vec(n+1);
    vector<vector<long long>> gr(k);
    vector<vector<long long> >br(n+1);
    for(long long i=0 ; i<k;  i++){
        long long a;cin>>a;
        for(long long j=0 ; i<a ; i++){
            long long temp;cin>>temp;
            gr[i].push_back(temp);
            br[temp].push_back(i);
        }
    }
    vector<bool> seen(k,0);
    apple(vec , gr , br , seen , 0);
    cout<<vec[2].size();

    

}   
