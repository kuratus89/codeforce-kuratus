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
    string s;cin>>s;
    ll n=s.size();
    bool zo=true;
    ll sez=0;
    ll fo=0;
    f(i,n){
        if(s[i]=='7')sez++;
        else if(s[i]=='4')fo++;
        else {
            zo=false;
            break;
        }
    }
    if(sez!=fo)zo=false;
    if(zo){
        cout<<s;
        return 0;
    }
    // cout<<sez<<" "<<fo<<endl;
    sez=((n/2)-sez);
    fo=((n/2)-fo);
    ll p=0;
    while(((sez!=0)||(fo!=0))&&(p<n)){
        if((s[p]-'0')>4){
            s[p]='7';
        }
        else if((s[p]-'0')<4)
    }

    

}   
