#include <bits/stdc++.h>
using namespace std;
int main(){
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        long long x=0;
        map<long long , long long> ma;
        for(long long i=0 ; i<n; i++)ma[vec[i]]++;
        while(ma[x])x++;
        bool rans;
        if(x==n)rans=0;
        else if(ma[x+1]==0)rans=1;
        else if((ma[x+1]==1)||(x==0))rans=1;
        else {
            bool ans=1;
            bool sta=1;
            for(long long i=0 ; i<n; i++){
                if(sta){
                    if(vec[i]==(x+1)){
                        ma[vec[i]]--;
                        sta=0;
                    }
                }
                else {
                    ma[vec[i]]--;
                    if(vec[i]==(x+1)){
                        if(ma[vec[i]]<=0)break;
                    }
                    if(vec[i]<x){
                        if(ma[vec[i]]<=0){
                            ans=0;
                            break;
                        }
                    }
                }
            }
            rans=ans;
        }
        if(rans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}