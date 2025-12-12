#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k;cin>>n>>k;
    long long v=1;
    for(long long i=0 ; i<k ; i++)v*=10;
    while(n%v!=0){
        long long l;
        long long temp=n;
        while(temp%10==0)temp/=10;
        l = temp%10;
        if(l%5==0)n*=2;
        else if(l%2==0) n*=5;
        else n*=10;
    }
    cout<<n<<endl;
    
    
}