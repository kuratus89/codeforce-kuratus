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
    long long a,b;cin>>a>>b;
    vector<vector<long long>> vec(a , vector<long long> (b,0));
    for(long long i=0 ; i<a ; i++){
        string s;cin>>s;
        for(long long j=0 ; j<b ; j++)if(s[i]=='*')vec[i][j]=1;
    }
    for(long long i=0 ; i<a ; i++){
        for(long long i=0 ; i<b ; i++){
            logn 
        }
    }
    

}   
