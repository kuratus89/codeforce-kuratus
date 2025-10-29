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

bool apple(vll &city , vll &tower , ll n){
    vector<pair<ll,ll>> range(tower.size());
    for(ll i=0 ; i<tower.size() ; i++) range[i] = {tower[i] - n , tower[i] + n};
    sorted(range);
    vector<pair<ll,ll>> merge;
    for(auto val:range){
        if(merge.empty())merge.push_back(val);
        else if(merge.back().second>=val.first)merge.back().second=max(merge.back().second , val.second);
        else merge.push_back(val);
    }
    bool ans=true;
    for(ll val:city){
        pair<ll,ll> pa = {val,LLONG_MAX};
        auto it = lower_bound(merge.begin() , merge.end() , pa);
        // if(it!=merge.begin())it--;
        // if((it==merge.end())||(((*it).first>val)&&((*it).second<val))) return 0;
        if(it != merge.begin()){
            auto prev = it;
            prev--;
            if(((*prev).first <= val) && (val <= (*prev).second)){
                continue;
            }
        }
        if(it != merge.end()){
            if(((*it).first <= val) && (val <= (*it).second)){
                continue; 
            }
        }

        return false;
    }
    return 1;

}


int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll n,m;cin>>n>>m;
    vll city(n) , tow(m);

    f(i,n)cin>>city[i];
    f(i,m)cin>>tow[i];
    ll low=0 , high = 2e9 , mid , ans;
    while(low<=high){
        mid = (low+high)/2;
        if(apple(city , tow , mid)){
            high = mid-1;
            ans= mid;
        }
        else {
            low = mid+1;
        }
    }
    cout<<ans;


    

}   
