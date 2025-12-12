#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,l,r;cin>>n>>l>>r;
        bool ans=1;
        vector<long long> vec(n);
        for(long long i=1 ; i<=n ; i++){
            vec[i-1] = ((l-1)/i+1)*i;
            if(vec[i-1]>r)ans=0;
        }
        if(ans){
            cout<<"YES"<<endl;
            for(auto val:vec)cout<<val<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    
}