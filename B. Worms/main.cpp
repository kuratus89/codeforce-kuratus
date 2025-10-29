#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    vector<long long > vec(n);
    for(long long  i=0 ; i<n ; i++) cin>>vec[i];
    long long  t; cin>>t;
    vector<long long > ca(t);
    for (long long  i=0 ; i<t ;i++ ) cin>>ca[i];
    for(long long i=1 ; i<n ; i++) vec[i]+=vec[i-1];
    // for(auto val:vec) cout<<val<<endl; 
    // for(auto val:ca){
    //     for(long long temp=1 ;temp<n ; temp++){
    //         if((val>vec[temp-1] && val<=vec[temp])){
    //             cout<<temp<<endl;
    //             break;
    //         }
    //     }
    // }
    for(auto val : ca){
        // find first index with prefix >= val
        auto it = lower_bound(vec.begin(), vec.end(), val);
        cout << (it - vec.begin() + 1) << "\n"; // +1 because indexing starts from 1
    }


}