#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,q;cin>>n>>q;
    vector<long long> vec(n);
    for(long long i=0 ; i<n; i++)cin>>vec[i];
    sort(vec.rbegin() , vec.rend());
    for(long long i=1; i<n ; i++)vec[i]+=vec[i-1];
    while(q--){
        long long a,b;cin>>a>>b;
        if(a>n){
            cout<<0<<endl;
            continue;
        }
        long long ans=0;
        a--;b--;
        b = a-b;
        if(b==0)ans = vec[a];
        else ans = vec[a] - vec[b-1];
        // for(long long i=n-a ; (i<n)&&(b>0) ; i++ , b--)ans+=vec[i];
        cout<<ans<<endl;
    }
    
    
}