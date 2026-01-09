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
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        long long itf=0 , cnf=0;
        for(long long i=0 ; (i<n)&&(cnf<k); i++){
            if(vec[i]==vec[0]){
                itf = i;
                cnf++;
            }
        }
        long long itl=n-1 , cnl=0;
        for(long long i=n-1 ; (i>=0)&&(cnl<k); i--){
            if(vec[i]==vec[n-1]){
                itl=i;
                cnl++;
            }
        }
        bool ans=0;
        if((cnf==k)&&(cnl==k)&&(itf<=itl))ans=1;
        if((vec[0]==vec[n-1])&&(cnf==k))ans=1;
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}