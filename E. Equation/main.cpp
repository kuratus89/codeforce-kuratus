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
double esp = 1e-7;
double rooter(double n){
    double low=0 , high = max(1.0, n) , mid;
    while (high>low+esp){
        mid=(high+low)/2;
        if((mid*mid)==n)return mid;
        else if((mid*mid)>n)high=mid;
        else low=mid;
    }
    return mid;
}
bool apple(double n , double k){
    double ans = k*k;
    ans+=rooter(k);
    return (ans>=n);
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    double n;cin>>n;
    double low =0 , high=1e10 ,mid;
    while(high>low+esp){
        mid = (high+low)/2;
        if(apple(n , mid))high=mid;
        else low=mid;
    }
    mid = (high+low)/2;
    cout<<fixed<<setprecision(7)<<mid;
    

}   
