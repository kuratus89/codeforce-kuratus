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
        vector<long long > vec(n);
        for(long long i=0 ;i<n; i++)cin>>vec[i];
        map<long long  , long long> ma;
        bool ans=0;
        long long cn=0;
        for(long long i=0 ; i<n;){
            if(ma[vec[i]])ans=1;
            ma[vec[i]]=1;
            long long val=vec[i];
            while((i<n)&&(vec[i]==val)){
                i++;
                cn++;
            }
            if(cn>=3)ans=1;
            else cn=0;
        }
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}