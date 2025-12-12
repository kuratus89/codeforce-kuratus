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
        if(n==1){
            cout<<k<<endl;
            continue;
        }
        long long x =1;
        while((((long long)1<<x+1)-1)<k)x++;
        x = ((long long)1<<x)-1;
        k-=x;
        vector<long long>ans;
        ans.push_back(x);
        if(k>=x+1){
            ans.push_back(x+1);
            k-=x+1;
        }
        
        if(k>0)if(ans.size()<n)ans.push_back(k);
        for(long long i=ans.size() ; i<n ; i++)ans.push_back(0);
        for(long long val:ans)cout<<val<<" ";
        cout<<endl;

    }
    
    
}