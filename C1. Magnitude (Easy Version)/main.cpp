#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        long long po=0,ne=0;
        for(long long i=0 ; i<n; i++){
            po = max(abs(vec[i]+po) , abs(vec[i]+ne));
            ne+=vec[i];
        }
        cout<<po<<endl;
        
    }
    
}