#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k;cin>>n>>k;
    long long left = k-1 , right = n-(k);
    long long ans =1 +(2*(n)) + min(left, right)+ n-1;

    cout<<ans<<endl;

    
    
}