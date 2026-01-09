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
        long long a=-1;
        long long i=2;
        while((i*i)<=n){
            if(n%i==0){
                a=i;
                break;
            }
            else i++;
        }
        if(a==-1){
            cout<<"NO"<<endl;
            continue;
        }
        long long x=n/a;
        i=a+1;
        long long b=-1;
        while((i*i)<=n){
            if(x%i==0){
                b=i;
                break;
            }
            else i++;
        }
        if(b==-1){
            cout<<"NO"<<endl;
            continue;
        }
        if((a*b)==n){
            cout<<"NO"<<endl;
            continue;
        }
        long long c = x/b;
        if(((a!=b)&&(a!=c)&&(b!=c)&&(a*b*c==n))){
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else cout<<"NO"<<endl;
        
        
        
    }
    
    
}