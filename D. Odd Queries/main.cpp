#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;cin>>t;
    for(int i=0 ; i<t ; i++){
        int n; cin>>n;
        int q; cin>>q;
        vector<int> vec(n);
        for(int j =0 ; j<n; j++) cin>>vec[j];
        for(int j=1 ; j<n ; j++) vec[j]+=vec[j-1];
        for(int j=0 ; j<q ; j++){
            int l ; cin>>l;
            int r ; cin>>r;
            int k ; cin>>k;
            int ans;
            
            // ans=vec[vec.size()-1]-(vec[r-1]-vec[l-1])+((r-l+1)*k);
            ans=vec[vec.size()-1];
            if(l == 1) ans -= vec[r-1];
            else ans -= vec[r-1] - vec[l-2];
            ans+=((r-l+1)*k);
            
            // cout<<ans<<endl;
            if((ans%2)==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }

    }
    
    return 0;
}