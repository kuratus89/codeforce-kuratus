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
        bool ans=0;
        for (long long k = 2; k*k <= n; k++) {
            long long sum = 1, p = 1;
            while (sum < n) {
                p *= k;
                sum+=p;
                if (sum == n)ans=true;
            }
        }
    

        
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
}