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
        for(long long i=0 ;i <n; i++)cin>>vec[i];
        // vector<bool> bolo(n,0);
        long long o=0,z=0;
        for(long long i=0 ; i<n; i++){
            long long x;cin>>x;
            if(x==0)o++;
            else z++;
            // if(x==1)bolo[i]=1;
        }
        bool ans=1;
        if((z==0)||(o==0)){
            for(long long i=1 ; i<n; i++)if(vec[i]<vec[i-1])ans=0;
        }
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;


    }
    
    
}