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
        long long i=0,j=1;
        map<long long , long long> ma;
        while(j<n){
            if(vec[i]!=vec[j]){
                ma[i+1]= j+1;
                // ma[j+1]= i+1;                
                i++;
            }
            else j++;
        }
        long long q;cin>>q;
        while(q--){
            long long a,b;cin>>a>>b;
            if((ma.count(a)==0)||(ma[a]>b))cout<<-1<<" "<<-1<<endl;
            else cout<<a<<" "<<ma[a]<<endl;
        }
    }
    
    
}