#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec(n);
    for(long long i=0 ; i<n; i++)cin>>vec[i];
    // if(n==1){
    //     if(vec[0]==0)cout<<1;
    //     else cout<<0;
    //     cout<<endl;
    //     return 0;
    // }
    for(long long i=1 ; i<n; i++)vec[i]+=vec[i-1];
    long long ans=0;
    for(long long i=0 ; i<n; i++){
        for(long long j=i ; j<n; j++){
            long long mid ,se , ln;
            if(i==0)mid = vec[j];
            else mid = vec[j] - vec[i-1];
            se = vec[n-1];
            se-=mid;
            ln = j-i+1;
            mid = ln -mid;
            ans = max(ans , se +mid);

        }
    }
    cout<<ans<<endl;
    
}