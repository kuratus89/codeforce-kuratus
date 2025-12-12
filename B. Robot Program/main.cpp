#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,x,k;cin>>n>>x>>k;
        vector<bool> vec(n);
        string s;cin>>s;
        for(long long i=0 ; i<n; i++){
            if(s[i]=='R')vec[i]=1;
            else vec[i]=0;
        }
        long long tim=0;
        long long pos=x;
        long long tl=LLONG_MAX;
        for(long long i=0 ; i<n ;i++ , tim++){
            if(pos==0){
                tl=tim;
                break;
            }
            if(vec[i])pos++;
            else pos--;
        }
        if(pos==0){
            tl=tim;
        }
        k-=tl;
        if((k<0)||(tl==LLONG_MAX)){
            cout<<0<<endl;
            continue;
        }
        long long ans=0;
        pos=0;
        for(long long i=0; i<n; i++){
            if((i!=0)&&(pos==0)){
                ans=i;
                break;
            }
            if(vec[i])pos++;
            else pos--;
        }
        if((ans==0)&&(pos==0)){
            ans=n;
        }
        if(ans==0){
            cout<<1<<endl;
        }
        else cout<<(k/ans)+1<<endl;
        
    }
    
}