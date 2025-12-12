#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long > vec(n);
    for(long long i=0 ; i<n; i++)cin>>vec[i];
    vector<long long> val = vec;
    sort(val.begin() , val.end());
    for(long long i=1 ; i<n; i++){
        vec[i]+=vec[i-1];
        val[i]+=val[i-1];
    }
    long long q;cin>>q;
    while(q--){
        long long t,a,b;cin>>t>>a>>b;
        a--;b--;
        long long ans=0;
        if(t==1){
            if(a==0)ans = vec[b];
            else ans = vec[b] - vec[a-1];
        }
        else {
            if(a==0)ans = val[b];
            else ans = val[b] - val[a-1];
        }
        cout<<ans<<endl;
    }
    
    
}