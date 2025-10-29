#include <bits/stdc++.h>
using namespace std;
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long tt;cin>>tt;
    while(tt--){
        long long n,a,b;cin>>n>>a>>b;
        vector<long long> vec(b+1);
        for(long long i=0 ; i<(b+1) ;i++)vec[i] = a/(b+1);
        long long left= (a - ((b+1)*(a/(b+1))));
        for(long long i=0 ; (left--) ; i++)vec[i]++;
        string ans;
        for(long long i=0 ; i<b ; i++){
            for(long long j=0 ; j<vec[i] ; j++)ans.push_back('R');
            ans.push_back('B');
        }
        for(long long j=0 ; j<vec[b] ; j++)ans.push_back('R');
        cout<<ans<<endl;
    }
    

}   
