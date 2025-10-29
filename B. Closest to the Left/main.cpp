#include <bits/stdc++.h>
using namespace std;
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long n;cin>>n;
    long long k; cin>>k;
    vector<long long > vec(n);
    for(int i=0 ; i<n ; i++)cin>>vec[i];
    while(k--){
        long long q;cin>>q;
        auto it= upper_bound(vec.begin(),vec.end(),q);
        cout<<(it-vec.begin())<<endl;
    }

        

}   
