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
    for(long long i=1 ; i<n; i++)vec[i]+=vec[i-1];
    long long q;cin>>q;
    while(q--){
        long long x;cin>>x;
        auto it = lower_bound(vec.begin() , vec.end() , x);
        cout<<it - vec.begin()+1<<endl;
    }
    
    
}