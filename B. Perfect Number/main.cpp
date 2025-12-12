#include <bits/stdc++.h>
using namespace std;

bool apple(long long n){
    long long ans=0;
    while(n){
        ans+=n%10;
        n/=10;
    }
    return (ans==10);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec;
    long long i=0;
    while(vec.size()!=n){
        if(apple(i))vec.push_back(i);
        i++;
    }
    cout<<vec[n-1];

    
    
}