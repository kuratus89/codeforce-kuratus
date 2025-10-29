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

void apple(vector<long long > &vec , long long n  , vector<long long > &ans){
    if(n==vec.size()-1)return ;
    if(vec[n]==1)vec[n]++;
    if((n!=0)&&(vec[n]%vec[n-1]==0))vec[n]++;
    while(vec[n+1]%vec[n]==0)vec[n+1]++;
    apple(vec , n+1 , ans);
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long tt;cin>>tt;
    while(tt--){
        long long n ; cin>>n;
        vector<long long > vec(n) , ans(n);

        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        
        apple(vec , 0  , ans);
        for(long long val:vec)cout<<val<<" ";
        cout<<endl;

    }
    

}
