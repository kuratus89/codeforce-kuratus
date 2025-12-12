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
    bool ans=1;
    long long cn=0;
    for(long long i=0 ; i<n; i++)cn = max(cn  ,(vec[i]-i-1));
    if(cn==0){
        cout<<"YES"<<endl;
        cout<<1<<" "<<1;
        return 0;
    }
    long long x
    for(long long i=0 ; i<n ;i++){
        if(i+cn>n)continue;
        if(i+cn==vec[i]){

        }
    }
    
}