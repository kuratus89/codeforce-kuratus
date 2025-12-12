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
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        long long od=0 , ev=0 , minod=LLONG_MAX , minev = LLONG_MAX;
        for(long long i=0 ; i<n; i++){
            if(vec[i]%2==0){
                ev++;
                minev = min(minev , vec[i]);
            }
            else {
                od++;
                minod = min(minod , vec[i]);
            }
        }
        bool ans=0;
        if((od==0)||(ev==0))ans=1;
        else if((od!=0)&&(minod<minev))ans=1;
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;

    }
    
    
}