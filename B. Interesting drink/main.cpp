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
    sort(vec.begin() , vec.end());
    long long q;cin>>q;
    while(q--){
        long long x;cin>>x;
        auto it = upper_bound(vec.begin() , vec.end() , x);
        cout<<it - vec.begin()<<endl;
    }
    
    
}