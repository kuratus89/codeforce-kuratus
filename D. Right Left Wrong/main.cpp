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
        vector<long long> vec(n);
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        for(long long i=1 ; i<n ;i++)vec[i]+=vec[i-1];
        string s;cin>>s;
        long long x=0 , y=n-1;
        long long ans=0;
        while(x<y){
            if((s[x]=='L')&&(s[y]=='R')){
                long long sum;
                if(x==0)sum = vec[y];
                else sum = vec[y] - vec[x-1];
                ans+=sum;
                x++;
                y--;
            }
            else if(s[x]!='L')x++;
            else y--;
        }
        cout<<ans<<endl;
    }
    
}