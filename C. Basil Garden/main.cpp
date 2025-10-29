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

long long apple(vector<long long > &vec , long long n , long long x , long long &ans){
    long long temp = vec[n] - x;
    if(n==vec.size()-1){
        
        ans = max(vec[n], ans);
        return temp;
    }

    if(vec[n]>vec[n+1]){
        ans = max(apple(vec , n+1 , 0 , ans) , ans);
        ans= max(vec[n] , ans);
        return  temp;
    }
    else {
        temp = apple(vec , n+1 , vec[n]-1 , ans);
        ans= max(vec[n] , ans);
        return temp - x;
    }
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long tt;cin>>tt;
    while(tt--){
        long long n ;cin>>n;
        vector<long long > vec(n);
        for(long long i=0; i<n; i++)cin>>vec[i];
        if(n==1){
            cout<<vec[0]<<endl;
            continue;
        }
        // long long ano , ans=0;
        // ano=apple(vec , 0 , 0 , ans);
        // cout<<ans<<" "<<ano<<endl;
        long long ans=0;
        for(long long i=n-1 ; i>=0 ; i--){
            ans = max(ans+1 , vec[i]);
        }
        cout<<ans<<endl;
    }
    

}   
