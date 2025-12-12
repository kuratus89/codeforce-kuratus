#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        string a,b;cin>>a>>b;
        long long x=a.size() , y=b.size();
        if(x>y){
            cout<<"NO"<<endl;
            continue;
        }
        map<char , long long> ma, mb;
        for(auto val:a)ma[val]++;
        for(long long i=0 ; i<x ; i++)mb[b[i]]++;
        bool ans=0;
        if(ma==mb)ans=1;
        for(long long i=0 ; i<(y-x) ; i++){
            
            mb[b[i+x]]++;
            mb[b[i]]--;
            if(mb[b[i]]<=0)mb.erase(b[i]);
            if(ma==mb)ans=1;
        
        }
        
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}