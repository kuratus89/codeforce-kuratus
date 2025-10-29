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
        string a,b;cin>>a>>b;
        map<char,long long> ma ;
        for(char val:a)ma[val]++;
        for(char val:b)ma[val] = ma[val] - 1;
        bool ans=1;
        for(auto val:ma)if(val.second!=0)ans=0;
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}