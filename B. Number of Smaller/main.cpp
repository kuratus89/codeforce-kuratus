#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long a,b;cin>>a>>b;
    vector<long long> veca(a), vecb(b);
    for(long long i=0 ; i<a ; i++)cin>>veca[i];
    for(long long i=0 ; i<b ; i++)cin>>vecb[i];
    long long ans=0;
    long long i=0;
    for(long long val:vecb){
        while((i<a)&&(veca[i]<val)){
            ans++;
            i++;
        }
        cout<<ans<<" ";
    }
    
}