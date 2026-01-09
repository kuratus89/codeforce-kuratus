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
        vector<long long> vec;
        for(long long i=(n) ; i>0 ; i--){
            long long x = (1<<i)-1;
            vec.push_back(x);
            for(long long y =0 ; y<i ; y++){
                vec.push_back(x^(1<<y));
            }
        }
        for(long long val:vec)cout<<val<<" ";
        cout<<endl;
        
    }
    
}