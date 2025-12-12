#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    map<string , long long> ma;
    while(n--){
        string s;cin>>s;
        ma[s]++;
        if(ma[s]==1){
            cout<<"OK";
        }
        else cout<<s<<ma[s]-1;
        cout<<endl;
    }
    
    
}