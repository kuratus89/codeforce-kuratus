#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        string s;cin>>s;
        long long one =0;
        for(auto val:s)if(val=='1')one++;
        if((one<=k)||(((k*2)-1)>=n)){
            cout<<"alice";
        }
        else cout<<"bob";
        cout<<endl;

    }
    
    
}