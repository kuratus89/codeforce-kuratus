#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>

    long long tt;cin>>tt;
    while(tt--){
        long long m,n;cin>>m>>n;
        string s;cin>>s;
        vector<bool> mac (m);
        for(long long i=0 ; i<m ; i++)mac[i]= (s[i]=='A');
        long long di =1;
        long long  mi=0;
        for(long long i=0 ; i<m ; i++){
            if(mac[i]){
                mi+=di;
            }
            else {
                di = di*2;
            }
        }
        while(n--){
            long long k;cin>>k;
            long long t=0;
            if(di==1){
                t=k;
            }
            else {
                while((k-mi)/di>0){
                    t+=mac.size();
                    k-=mi;
                    k/=di;
                }
                for(long long i=0 ; (k>0) ; i++,t++){
                    if(i==m)i=0;
                    if(mac[i])k--;
                    else k/=2;
                    
                }
            }
            
            cout<<t<<endl;
        }
    }
    

}   