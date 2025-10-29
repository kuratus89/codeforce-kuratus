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
    int tt ; cin>>tt;
    vector<vector<int>> vec={{1,1,1,1,1,1,1,1,1,1},
                             {1,2,2,2,2,2,2,2,2,1},
                             {1,2,3,3,3,3,3,3,2,1},
                             {1,2,3,4,4,4,4,3,2,1},
                             {1,2,3,4,5,5,4,3,2,1},
                             {1,2,3,4,5,5,4,3,2,1},
                             {1,2,3,4,4,4,4,3,2,1},
                             {1,2,3,3,3,3,3,3,2,1},
                             {1,2,2,2,2,2,2,2,2,1},
                             {1,1,1,1,1,1,1,1,1,1}
}; 
    while(tt--){
        vector<string> val(10);
        f(i,10)cin>>val[i];

        int ans=0;
        f(j,10) f(i,val[j].size())if (val[j][i]=='X') ans+=vec[j][i];
        cout<<ans<<endl;
    }

    

}   
