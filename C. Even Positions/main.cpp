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
    int tt; cin>>tt;
    while (tt--){
        int n; cin>>n;
        string s;
        cin>>s;
        vi vec(n,0);
        f(i,n){
            if(s[i]=='(')vec[i]=1;
            else if(s[i]==')')vec[i]=-1;
            else vec[i]=0;
        }
        vi sum(n);
        sum[0]=vec[0];
        for(int i=1; i<n ; i++) sum[i]=sum[i-1]+vec[i];
        if(vec[0]==0)vec[0]=1;
        ll sn=0;
        f(i,n){
            if(!(vec[i]==0))continue;
            if(((sum[i])+sn)==1){
                vec[i]=-1;
                sn--;
            }
            else if(((sum[i])+sn)==-1){
                vec[i]=1;
                sn++;
            }
            else {
                vec[i]=1;
                sn++;
            }

        }
        // f(i,n){
        //     if(vec[i]==-1)cout<<')';
        //     else if(vec[i]==1)cout<<'(';
        //     else cout<<"_";
        // }
        // cout<<endl;
        ll ans=0;
        f(i,n) ans+=((vec[i])*(i+1));
        cout<<-ans<<endl;
        
        
    }
    

}   
