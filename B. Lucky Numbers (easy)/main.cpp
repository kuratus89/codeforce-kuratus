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
 
void apple(vll &vec , ll n , ll seven , ll four){
    if(n>1e10)return ;
    if((seven!=0)&&(seven==four))vec.push_back(n);
    apple(vec , ((n*10)+4) , seven , four+1);
    apple(vec , ((n*10)+7) , seven+1 , four);

}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    vll  vec;
    apple(vec , 0 , 0 , 0);
    sorted(vec);
    ll n;cin>>n;
    auto it = lower_bound(vec.begin() , vec.end() , n);
    cout<<*it;
    
 
} 