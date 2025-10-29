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
double est = 1e-6 ;
pair<bool , pair<double,double>> inter (pair<double,double> a , pair<double,double> b){
    double allu=max(a.first,b.first);
    double ballu = min(a.second , b.second);
    if(allu<=ballu)return {1 , {allu , ballu}};
    else return {0 , {-1,-1}};
}

bool apple(vector<pair<ll,ll>> &vec , double t){
    vector<pair<double,double>> cor(vec.size());
    for(ll i=0 ; i<vec.size() ; i++) {
        double a,b;
        a= vec[i].first- ( vec[i].second *t);
        b= vec[i].first+ ( vec[i].second *t);
        if(a>b)swap(a,b);
        cor[i]={a,b};
    }
    pair<double,double> xo = cor[0];
    for(ll i=1 ; i<vec.size() ; i++){
        pair<bool , pair<double,double>> ino = inter(xo , cor[i]);
        if(ino.first)xo = ino.second;
        else return 0;
    }
    return 1;


}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    ll n;cin>>n;
    vector<pair<ll,ll>> vec(n);
    f(i,n)cin>>vec[i].first>>vec[i].second;
    double low = 0 , high=2e9+5 , mid , ans;
    while(high>low+est){
        mid = (low+high)/2;
        if(apple(vec , mid)) {
            high = mid;
            ans=mid;
        }
        else low = mid;
    }
    cout<<fixed<<setprecision(7)<<ans;

    

}   
