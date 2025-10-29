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

void apple(vector<vector<long long>> &ap , vector<bool> &seen  ,vector<vector<long long>> &bp,vector<bool> &chabo , long long n ){
    if(seen[n])return ;
    seen[n]=1;
    for(auto val:bp[n]){
        if(chabo[val])continue;
        chabo[val]=1;
        for(auto voc:ap[val]){
            if(seen[voc])continue;
            apple(ap , seen , bp ,chabo, voc);
        }
    }

}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long n ;cin>>n;
    vector<string> vec(n);
    for(long long i=0 ; i<n ; i++)cin>>vec[i];
    vector<vector<long long>> ap(26);
    vector<vector<long long>> bp(n);
    vector<bool> chabo(26,0);
    vector<bool> seen(n,0);
    for(long long i=0 ; i<n ; i++){
        for(auto  val:vec[i]){
            
            ap[val-'a'].push_back(i);
            bp[i].push_back(val-'a');
        }
    }
    long long ans=0;
    for(long long i=0 ; i<n; i++){
        if(seen[i])continue;
        ans++;
        apple(ap , seen , bp ,chabo, i);
    }
    cout<<ans;

    

}   
