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
        long long x=0,val=0;
        while((val+x)<k){
            val+=x;
            x++;
        }
        val = k-val;
        x = n-x-1;
        val = n-val;
        // cout<<x<<" "<<val<<endl;
        string ans (n , 'a');
        ans[x]='b';
        ans[val]='b';
        cout<<ans<<endl;

    }
    
}