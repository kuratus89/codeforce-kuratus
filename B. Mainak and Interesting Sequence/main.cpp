#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,m;cin>>n>>m;
        if(n>m){
            cout<<"NO"<<endl;
            continue;
        }
        if(m%n==0){
            cout<<"YES"<<endl;
            for(long long i=0 ; i<n; i++){
                cout<<m/n<<" ";
            }
            cout<<endl;
            continue;
        }
        vector<long long> ans;
        long long cn=0;
        for(long long i=1 ; i<=n; i++){
            ans.push_back(i);
            cn+=i;
        }
        if(cn==m){
            cout<<"YES"<<endl;
            for(long long val:ans)cout<<val<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    
}