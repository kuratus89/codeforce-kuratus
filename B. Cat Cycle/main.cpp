#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        k--;
        if(n%2==0){
            cout<<(k%n)+1<<endl;
            continue;
        }
        
        long long ans = k/ ((n-1)/2);
        ans = (k+ans)%n;
        cout<<ans+1<<endl;

    }
    
    
}