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
        queue<long long> a,b,c;
        for(long long i=0 ; i<n; i++){
            long long temp;cin>>temp;
            a.push(temp);
        }
        for(long long i=0 ; i<n; i++){
            long long temp;cin>>temp;
            b.push(temp);
        }
        for(long long i=0 ; i<n; i++){
            long long temp;cin>>temp;
            c.push(temp);
        }
        long long ans=0;
        // while(ans!=k){
        //     long long cn=0;
        //     if((!a.empty())&&(a.top()<=k)){
        //         ans = ans|a.top();
        //         a.pop();
        //         cn++;
        //     }
        //     if((!b.empty())&&(b.top()<=k)){
        //         ans = ans|b.top();
        //         b.pop();
        //         cn++;
        //     }
        //     if((!c.empty())&&(c.top()<=k)){
        //         ans = ans|c.top();
        //         c.pop();
        //         cn++;
        //     }
        //     if(cn==0)break;
        // }
        while((!a.empty())&&(a.front()<=k)&&((a.front()&(~k))==0)){
            ans = ans|a.front();
            a.pop();
        }
        while((!b.empty())&&(b.front()<=k)&&((b.front()&(~k))==0)){
            ans = ans|b.front();
            b.pop();
        }
        while((!c.empty())&&(c.front()<=k)&&((c.front()&(~k))==0)){
            ans = ans|c.front();
            c.pop();
        }
        if(ans==k)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
        

    }
    
    
}