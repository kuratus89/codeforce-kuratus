#include <bits/stdc++.h>
using namespace std;

long long apple(string &s , char ch){
    long long ans=0 , i=0 , j=s.size()-1;

    while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else {
                if((ch==s[i])){
                    i++;
                    ans++;
                    continue;
                }
                if(ch == s[j]){
                    j--;
                    ans++;
                    continue;
                }
                if((s[i+1]==s[j])&&(ch=='?')){
                    ch=s[j];
                }
                else if((s[i]==s[j-1])&&(ch=='?'))ch = s[i];
                else {
                    ans=-1;
                    break;
                }
            }
        }
        return ans;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        string s;cin>>s;
        long long i=0 , j=s.size()-1;
        long long ans=LLONG_MAX;
        bool ano=0;
        
        for(long long i=97; i<(97+26) ; i++){
            long long temp=apple(s, char(i));
            if(temp==-1)continue;
            ano=1;
            ans = min(ans ,temp);   
        }
    
        
        
        
        if(ano)cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    
    
}