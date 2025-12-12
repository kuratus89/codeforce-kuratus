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
        map<long long , bool> ma;
        long long ev=0;
        for(long long i=0 ; i<n; i++){
            if(vec[i]%2==0)ev++;
            ma[vec[i]]=1;
        }
        if(ev%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        bool ans=0;
        for(auto val:ma)if(((ma.count(val.first-1)!=0)||(ma.count(val.first+1)!=0)))ans=1;
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
        
    }
    
    
}