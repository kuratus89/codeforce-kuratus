#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        string s;cin>>s;
        long long aw=0 , bw=0 , awh=0 , bwh=0 , al=5 , bl=5 , atw=0 , btw=0;
        long long ans=1;
        bool cha=1;
        // for(char val:s){
        //     if(cha){
        //         if(val=='1')atw++;
        //         cha =0;
        //     }
        //     else {
        //         if(val=='1')btw++;
        //         cha=1;
        //     }
        // }
        cha=1;
        bool ano=0;
        for(char val:s){
            if(cha){
                if(val=='1')aw++;
                else if(val=='?')awh++;
                al--;
                cha=0;
            }
            else {
                if(val=='1')bw++;
                else if(val=='?')bwh++;
                bl--;
                cha=1;
            }
            if((((aw+awh)-bw)>(bl))||((bw+bwh-aw)>(al))){
                cout<<ans<<endl;
                ano=1;
                break;
            }
            else ans++;
        }
        if(!ano)cout<<10<<endl;
        
    }
    
    
}