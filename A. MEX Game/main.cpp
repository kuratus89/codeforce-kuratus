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
        for(long long i=0 ;i<n; i++)cin>>vec[i];
        map<long long , long long> ma;
        for(long long i=0 ; i<n; i++)ma[vec[i]]++;
        long long x=0;
        while(ma[x]>0)x++;
        long long y = 0;
        long long cn=0;
        for(long long i=0 ; i<n; i++){
            
        }
        cout<<min(x,y)<<endl;
    }
    
}