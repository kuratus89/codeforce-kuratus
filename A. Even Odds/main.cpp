#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k;cin>>n>>k;
    n=k-++n/2;
    if(n>0)cout<<2*n;
    else cout<<2*k-1;
    
}