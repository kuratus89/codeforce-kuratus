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
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        map<long long , vector<long long>> ma;
        for(long long i=0 ; i<n ; i++)ma[vec[i]].push_back(i);
        vector<long long> ans(n);
        bool valid=1;
        for(auto val:ma){
            if(val.second.size()==1){
                valid=0;
                break;
            }
            for(long long i=0 ; i<val.second.size() ; i++){
                if(i==val.second.size()-1)ans[val.second[i]] = val.second[0]+1;
                else{
                    ans[val.second[i]] = val.second[i+1]+1;
                }
            }
        }
        if(valid){
            for(long long i=0 ; i<n ; i++)cout<<ans[i]<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    

}   
