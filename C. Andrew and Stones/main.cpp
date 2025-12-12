#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ;i ++)cin>>vec[i];
        long long ev=0 , od=0;
        long long ans=0;
        if((n==3)&&(vec[1]%2!=0)){
            cout<<-1<<endl;
            continue;
        }
        long long cn=0;
        for(long long i=1 ; i<n-1; i++){
            if(vec[i]%2==0){
                ans+=vec[i]/2;
                ev+=vec[i]/2;
            }
            else {
                if(vec[i]==1)cn++;
                ev--;
                ans+=(vec[i]+1)/2;
            }
        }
        
        if((cn!=n-2))cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    
}