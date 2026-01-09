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
        if(!(n%2)){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        long long y=2*n , a=y/2 , b=a;
        a++;
        while(b>0){
            cout<<a<<" "<<b<<endl;
            a++;b-=2;
        }
        b=2;
        a=y;
        while(b<(n+1)){
            cout<<a<<" "<<b<<endl;
            a--;
            b+=2;
        }


    }
    
    
}