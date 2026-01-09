#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k,a,b;cin>>n>>k>>a>>b;
        long long x = n/k;
		long long kalia= n%k;
		long long y = max(0LL, kalia- a);
		long long z = max(0LL, a -kalia);
		long long c = max(0LL, x -b);
		long long rem = min(z / k, c);
		long long ans =y+c-rem;
		cout << ans << endl;

    }
    
    
}