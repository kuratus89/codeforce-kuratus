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
        for(long long i=0 ; i<n;i++)cin>>vec[i];
        long long neg=0;
        bool z=0;
        for(long long i=0 ; i<n; i++){
            if(vec[i]==0){
                z=1;
                break;
            }
            if(vec[i]<0){
                neg++;
            }
        }
        for(long long i=0 ; i<n; i++)if(vec[i]<0)vec[i]*=-1;
        long long sum=0;
        for(long long i=0 ; i<n; i++)sum+=vec[i];
        if(z){
            cout<<sum<<endl;
            continue;
        }
        neg = neg%2;
        sort(vec.begin() , vec.end());
        long long mi=0;
        for(long long i=0 ; (i<n)&&(i<neg); i++)mi+=vec[i];
        sum-=(2*mi);
        cout<<sum<<endl;
        
    }
    
    
}