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
        bool valid = 1;
        for(long long i=1 ; i<n-1 ; i++){
            long long pre = vec[i-1];
            long long cur = vec[i];
            long long nex = vec[i+1];
            if(pre==0)continue;
            if((pre>cur)||(2*nex<cur)){
                valid=0;
                break;
            }
            vec[i] = cur - (pre*2);
            vec[i+1] = vec[i+1] - pre;
            vec[i-1] = 0;
            if (vec[i] < 0 || vec[i+1] < 0) {
                valid = 0;
                break;
            }


            
        }
        for(auto val:vec)if(val!=0)valid=0;
        if(valid)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

}   
