#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        vector<string> vec(9);
        for(long long i=0 ; i<9 ; i++)cin>>vec[i];
        for(long long i=0 ; i<9; i++)for(auto &val:vec[i])if(val=='9')val='1';
        for(long long i=0 ; i<9; i++)cout<<vec[i]<<endl;
    }
    
    
}