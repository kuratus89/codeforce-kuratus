#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec(n/2);
    for(long long i=0 ; i<(n/2) ; i++)cin>>vec[i];
    sort(vec.begin() , vec.end());
    long long ans=0;
    vector<long long> od , ev;
    for(long long i=1 ; i<=n; i++){
        if(i%2==0)ev.push_back(i);
        else od.push_back(i);
    }
    long long ea=0 , oa=0;
    for(long long i=0 ; i<n/2; i++){
        ea+=abs(ev[i] - vec[i]);
    }
    for(long long i=0 ; i<n/2; i++){
        oa+=abs(od[i] - vec[i]);
    }
    ans = min(oa , ea);
    cout<<ans<<endl;
    

    
    
}