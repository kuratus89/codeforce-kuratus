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
        vector<long long > vec(n);
        for(long long i=0; i<n ; i++)cin>>vec[i];
        long long sum =0 ;
        for(long long i=0 ; i<n ; i++)sum+=vec[i];
        if(n==3){
            long long a = vec[0];
            long long b = vec[1];
            long long c = vec[2];
            bool ans;
            if((a==b)||(b==c)||(a==c))ans=1;
            else ans=0;
            if(a>=(sum-a))ans=0;
            if(b>=(sum-b))ans=0;
            if(c>=(sum-c))ans=0;
            if(ans)cout<<sum;
            else cout<<0;
            cout<<endl;
            continue;
            
        }
        map<long long  , long long > ma;
        for(long long i=0 ; i<n ; i++){
            if(vec[i]>=(sum - vec[i]))continue;
            auto it = ma.find(vec[i]);
            if(it == ma.end())ma[vec[i]] = 1;
            else ma[vec[i]]++;
        }
        long long ans =0 ; 
        long long cn=0;
        priority_queue<long long> le;
        
        for(auto val:ma){
            long long value = val.first;
            long long no = val.second;
            // if(value>=(sum - value))continue;
            if(no%2!=0){
                le.push(value);
                if(no ==1)continue;
                else no--;
            }
            ans+=(value*no);
            cn+=no;
            
        }
        if(!le.empty()){
            ans+=le.top();
            le.pop();
            cn++;
        }
        if(!le.empty()){
            ans+=le.top();
            le.pop();
            cn++;
            
        }
        if(cn>=3)cout<<ans<<endl;
        else cout<<0<<endl;
    }
    

}   
