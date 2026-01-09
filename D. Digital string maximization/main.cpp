#include <bits/stdc++.h>
using namespace std;

bool apple(string &s , long long i){
    if(i<=0)return 1;
    bool ans=1;
    long long cur = s[i]-'0';
    long long pre = s[i-1]-'0';
    if((pre+1)<cur){
        ans=0;
        s[i]= (char) (pre+'0');
        s[i-1]= (char)(cur-1 +'0');
    }
    return ans&&(apple(s , i-1));
}


int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        string s;cin>>s;
        while(!apple(s,s.size()-1));
        cout<<s<<endl;       

    }
    
    
}