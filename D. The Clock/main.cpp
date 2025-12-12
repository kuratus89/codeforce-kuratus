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
        long long k;cin>>k;
        long long hr = k/60 , mi = k%60;
        string jh;
        jh.push_back(s[0]);
        jh.push_back(s[1]);
        string kh;
        kh.push_back(s[3]);
        kh.push_back(s[4]);
        long long hour =stoi(jh);
        long long minute = stoi(kh);
        long long hu=hour , minu = minute;
        bool x=0,z=0;
        vector<pair<long long , long long>> ans;
        while(true){
            if(x){
                if(((hu*minu)==(hour*minute))){
                    ans.push_back({hu , minu});
                    break;

                }
                else if(((hu*minu)>(hour*minute))){
                    z=1;
                    break;
                }
            }
            ans.push_back({hu,minu});
            hu+=hr;
            hu+=(mi)/60;
            minu+=mi;
            minu%=60;
            if(hu>=24){
                x=1;
                hu%=24;
            }
        }
        if(z){
            cout<<16<<endl;
        }
        else {
            long long ano=0;
            for(auto val:ans){
                long long a=val.first , b = val.second;
                if(((a%10)==(b/10))&&((a/10)==(b%10)))ano++;
            }
            cout<<ano<<endl;
        }

    }
    
    
}