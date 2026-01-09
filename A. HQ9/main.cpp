#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    string s;cin>>s;
    bool ans=0;
    for(auto val:s)if((val=='H')||(val=='Q')||(val=='9'))ans=1;
    if(ans)cout<<"YES";
    else cout<<"NO";
    
    
}