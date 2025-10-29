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
    ll us,ps,al;cin>>us>>ps>>al;
    ll n;cin>>n;
    multiset<ll> usb;
    multiset<ll> ps2;
    f(i,n){
        ll temp;cin>>temp;
        string s;cin>>s;
        if(s=="USB") usb.insert(temp);
        else ps2.insert(temp);
    }
    ll ans=0;
    ll uspri=0;
    ll pspri=0;
    ll alpri=0;
    for(int i =0 ; i<us ; i++){
        if(usb.empty())break;
        ans++;
        uspri+=*(usb.begin());
        usb.erase(usb.begin());
    }
    for(int i =0 ; i<ps ; i++){
        if(ps2.empty())break;
        ans++;
        pspri+=*(ps2.begin());
        ps2.erase(ps2.begin());
    }
    for(int i =0 ; i<al ; i++){
        if(ps2.empty()&&usb.empty())break;
        ll pico,uko;
        if(ps2.empty())pico=LLONG_MAX;
        else pico=*ps2.begin();
        if(usb.empty())uko=LLONG_MAX;
        else uko=*usb.begin();
        ans++;
        if(pico<uko){
            alpri+=pico;
            ps2.erase(ps2.begin());
        }
        else {
            alpri+=uko;
            usb.erase(usb.begin());
        }
        
    }
    cout<<ans<<" "<<(uspri+pspri+alpri);

    

}   
