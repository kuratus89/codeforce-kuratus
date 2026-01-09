#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k;cin>>n>>k;
    cout<<((((n/k*(n/k-1))/2)*(k-(n%k)))+((((n/k+1)*(n/k))/2)*(n%k)))<<" "<<(((n-(k-1))*((n-(k-1))-1))/2);
}